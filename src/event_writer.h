#include "record_writer.h"
#include "event.pb.h"

class EventWriter {
  std::unique_ptr<RecordWriter> record_writer;
  EventWriter(const std::string& file);
  ~EventWriter();
  bool write_event(const tensorboard::Event& event);
};
