#include "room.h"

Room::Room(std::string id, std::string type, int price)
    : _id(id), _type(type), _price(price) {}

std::string Room::id() const {
    return _id;
}

std::string Room::type() const {
    return _type;
}

int Room::price() const {
    return _price;
}

void Room::updatePrice(int price) {
    _price = price;
}

std::ostream& operator<<(std::ostream& os, const Room& r){
  os << "Chambre " << r.type() << " numero " << r.id() << " à " << r.price() << "€ la nuitée";
  return os;
}