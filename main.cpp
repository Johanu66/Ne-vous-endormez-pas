#include <iostream>
#include "client.h"
#include "date.h"
#include "room.h"
#include "hotel.h"

int main(){
  Client client1("johanu33", "GANDONOU", "Johanu");
  Room room1(6496, "Suite", 10000);
  Room room2(4941, "Suite", 15000);
  Hotel hotel("ocean11", "Les Princes", "Cotonou");
  hotel.addRoom(room1);
  hotel.addRoom(room2);

  std::cout << hotel << std::endl;
  return 0;
}