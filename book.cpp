#include "book.h"

// Constructeur de la classe Book
Book::Book(Date started_date, int number_of_night, Hotel& hotel, Room& room, Client& client)
    : _started_date(started_date), _number_of_night(number_of_night), _hotel(hotel), _room(room), _client(client) {}

// Méthode pour récupérer la date de début
Date Book::started_date() {
    return _started_date;
}

// Méthode pour récupérer le nombre de nuits
int Book::number_of_night() {
    return _number_of_night;
}

// Méthode pour récupérer l'identifiant de l'hôtel
Hotel& Book::hotel() {
    return _hotel;
}

// Méthode pour récupérer l'identifiant de la chambre
Room& Book::room() {
    return _room;
}

// Méthode pour récupérer l'identifiant du client
Client& Book::client() {
    return _client;
}

// Méthode pour mettre à jour la date de début
void Book::updateStartedDate(Date d) {
    _started_date = d;
}

// Méthode pour mettre à jour le nombre de nuits
void Book::updateNomberOfNight(int number_of_night) {
    _number_of_night = number_of_night;
}

// Méthode pour mettre à jour l'identifiant de l'hôtel
void Book::updateHotel(Hotel& hotel) {
    _hotel = hotel;
}

// Méthode pour mettre à jour l'identifiant de la chambre
void Book::updateRoom(Room& room) {
    _room = room;
}

// Méthode pour mettre à jour l'identifiant du client
void Book::updateClient(Client& client) {
    _client = client;
}

int Book::calculateTotalAmount(){
  _total_amount = _room.price() * _number_of_night;
  return _total_amount;
}