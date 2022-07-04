#include "event.pb.h"
#include "summary.pb.h"
#include "plugins/scalar/plugin_data.pb.h"

namespace scalar {

const auto PLUGIN_NAME = "scalars";
const auto PROTO_VERSION = 0;

tensorboard::SummaryMetadata create_summary_metadata (std::string display_name,
                                                      std::string description) {

  auto metadata = tensorboard::SummaryMetadata();
  metadata.set_display_name(display_name);
  metadata.set_summary_description(description);

  auto content = tensorboard::ScalarPluginData();
  content.set_version(PROTO_VERSION);

  auto plugin_data = new tensorboard::SummaryMetadata::PluginData();
  plugin_data->set_plugin_name(PLUGIN_NAME);
  plugin_data->set_content(content.SerializeAsString());

  metadata.set_allocated_plugin_data(plugin_data);

  return metadata;
}

}

namespace core {

long get_wall_time () {
  auto now = std::chrono::system_clock::now();
  return now.time_since_epoch().count();
}

std::unique_ptr<tensorboard::Event> write_scalar (const std::string& tag,
                                                  float value,
                                                  int64_t global_step) {
  std::unique_ptr<tensorboard::Event> e;
  e->set_step(global_step);
  e->set_wall_time(get_wall_time());
  auto v = e->mutable_summary()->add_value();
  v->set_tag(tag);
  v->set_simple_value(value);
  return e;
}

}
