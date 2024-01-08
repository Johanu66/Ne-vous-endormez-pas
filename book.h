#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include "date.h"
#include "client.h"
#include "hotel.h"
#include "room.h"

class Book{
  private:
    Date _started_date;
    int _number_of_night;
    Hotel& _hotel;
    Room& _room;
    Client& _client;
    int _total_amount;
  public:
    Book(Date started_date, int number_of_night, Hotel& hotel, Room& room, Client& client);
    Date started_date();
    int number_of_night();
    Hotel& hotel();
    Room& room();
    Client& client();
    void updateStartedDate(Date d);
    void updateNomberOfNight(int number_of_night);
    void updateHotel(Hotel& hotel);
    void updateRoom(Room& room);
    void updateClient(Client& client);
    int calculateTotalAmount();
};

#endif