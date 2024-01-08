#ifndef HOTEL_H
#define HOTEL_H

#include <iostream>
#include <vector>
#include <algorithm>
#include "room.h"
#include <cassert>

class Hotel{
  private:
    static std::vector<std::string> ids;
    std::string _id;
    std::string _name;
    std::string _city;
    std::vector<Room> _rooms;
  public:
    Hotel(std::string id, std::string name, std::string city);
    std::string id() const;
    std::string name() const;
    std::string city() const;
    std::vector<Room> rooms() const;
    void addRoom(Room& room);
    void removeRoom(Room& room);
};

std::ostream& operator<<(std::ostream& os, const Hotel& hotel);

#endif