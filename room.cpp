#include "room.h"

Room::Room(int number, std::string type, int price)
    : _number(number), _type(type), _price(price) {}

int Room::number() const {
    return _number;
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
  os << "Chambre " << r.type() << " numero " << r.number() << " à " << r.price() << "€ la nuitée";
  return os;
}