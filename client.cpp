#include "client.h"

int Client::nextId = 0;

Client::Client(std::string last_name, std::string first_name)
  : _id(++nextId), _last_name(last_name), _first_name(first_name) {}

int Client::id() const {
  return _id;
}

std::string Client::lastName() const {
  return _last_name;
}

std::string Client::firstName() const {
  return _first_name;
}

void Client::updateLastName(std::string last_name) {
  _last_name = last_name;
}

void Client::updateFirstName(std::string first_name) {
  _first_name = first_name;
}

std::ostream& operator<<(std::ostream& os, const Client& p){
  os << p.id() << ", " << p.firstName() << " " << p.lastName();
  return os;
}