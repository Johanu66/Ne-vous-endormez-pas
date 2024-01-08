#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include "date.h"
#include <vector>
#include <algorithm>
#include <cassert>

class Client{
  private:
    static std::vector<std::string> ids;
    std::string _id;
    std::string _last_name;
    std::string _first_name;

  public:
    Client(std::string id, std::string last_name, std::string first_name);
    std::string id() const;
    std::string lastName() const;
    std::string firstName() const;
    void updateLastName(std::string last_name);
    void updateFirstName(std::string fisrt_name);
};

std::ostream& operator<<(std::ostream& os, const Client& c);

#endif