#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#include <iomanip>
#include <cstring>

class PhoneBook
{
private:
    Contact contacts[8];
    int contact_count;
public:
    PhoneBook();
    ~PhoneBook();
    void add_contact();
    void print_table();
};

#endif