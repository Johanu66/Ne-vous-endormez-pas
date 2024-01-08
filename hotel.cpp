#include "hotel.h"

std::vector<std::string> Hotel::ids;

Hotel::Hotel(std::string id, std::string name, std::string city)
  : _name(name), _city(city) {
  auto it = std::find(Hotel::ids.begin(), Hotel::ids.end(), id);
  if (it != Hotel::ids.end()) {
    assert(false && "Cet identifiant existe deja.");
  }
  else{
    _id = id;
    Hotel::ids.push_back(id);
  }
}

std::string Hotel::id() const {
    return _id;
}

std::string Hotel::name() const {
    return _name;
}

std::string Hotel::city() const {
    return _city;
}

std::vector<Room> Hotel::rooms() const {
    return _rooms;
}

void Hotel::addRoom(Room& room) {
    _rooms.push_back(room);
}

void Hotel::removeRoom(Room& room) {
    _rooms.erase(std::remove_if(_rooms.begin(), _rooms.end(), 
        [room](Room valeur){ return valeur.type() == room.type() && valeur.number() == room.number(); }),
        _rooms.end()
    );
}

std::ostream& operator<<(std::ostream& os, const Hotel& hotel) {
    os << "Hotel ID: " << hotel.id() << std::endl;
    os << "Nom: " << hotel.name() << std::endl;
    os << "Ville: " << hotel.city() << std::endl;
    os << "Chambres:" << std::endl;

    for (const Room& room : hotel.rooms()) {
        os << room << std::endl;
    }

    return os;
}
