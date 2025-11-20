#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
class phonebook
{
private:
    Contact contacts[8];
    int contact_count;
public:
    phonebook();
    ~phonebook();
};

#endif