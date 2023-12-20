#ifndef ROOM_H
#define ROOM_H

#include <iostream>

class Room{
  private:
    int _number;
    std::string _type;
    int _price;
  public:
    Room(int number, std::string type, int price);
    int number() const;
    std::string type() const;
    int price() const;
    void updatePrice(int price);
};

#endif