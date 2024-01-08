#include "client.h"

std::vector<std::string> Client::ids;

Client::Client(std::string id, std::string last_name, std::string first_name)
  : _last_name(last_name), _first_name(first_name) {
  auto it = std::find(Client::ids.begin(), Client::ids.end(), id);
  if (it != Client::ids.end()) {
    assert(false && "Cet identifiant existe deja.");
  }
  else{
    _id = id;
    Client::ids.push_back(id);
  }
}

std::string Client::id() const {
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

std::ostream& operator<<(std::ostream& os, const Client& c){
  os << c.id() << ", " << c.firstName() << " " << c.lastName();
  return os;
}