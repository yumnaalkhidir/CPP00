#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#include <iomanip>
#include <cstring>
#include <cstdlib>

class PhoneBook
{
private:
    Contact contacts[8];
    int contact_count;
    int total_contacts;
public:
    PhoneBook();
    ~PhoneBook();
    void add_contact();
    void print_table();
};

#endif