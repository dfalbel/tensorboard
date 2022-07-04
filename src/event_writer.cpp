#include "event_writer.h"

EventWriter::EventWriter(const std::string& file) :
  record_writer(RecordWriter(file)) {}

EventWriter::~EventWriter() {
  std::cout << "Deleting event" << std::endl;
}

bool EventWriter::write_event(const tensorboard::Event& event) {
  this->record_writer->write_record(event.SerializeAsString());
}
