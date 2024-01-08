#ifndef ROOM_H
#define ROOM_H

#include <iostream>

class Room{
  private:
    std::string _id;
    std::string _type;
    int _price;
  public:
    Room(std::string id, std::string type, int price);
    std::string id() const;
    std::string type() const;
    int price() const;
    void updatePrice(int price);
};

std::ostream& operator<<(std::ostream& os, const Room& r);

#endif