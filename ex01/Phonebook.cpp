#include "Phonebook.hpp"
#include <cctype>
#include <iomanip>
void PhoneBook::add_contact()
{
    std::string firstname = "";
    std::string lastname = "";
    std::string nickname = "";
    std::string number = "";
    std::string secret = "";
    int index;

    while(firstname.length() == 0)
    {
        std::cout << "Enter First Name: ";
        std::getline(std::cin, firstname);
    }
    while(lastname.length() == 0)
    {
        std::cout << "Enter Last Name: ";
        std::getline(std::cin, lastname);

    }
    while(nickname.length() == 0)
    {
        std::cout << "Enter Nickname: ";
        std::getline(std::cin, nickname);
    }
    while(number.length() == 0)
    {
        std::cout << "Enter Phone Number: ";
        std::getline(std::cin, number);
    }
    while(secret.length() == 0)
    {
        std::cout << "Enter Dark Secret: ";
        std::getline(std::cin, secret);
    }
    index = total_contacts % 8;
    contacts[index] = Contact(firstname, lastname, nickname, number, secret);
    if (contact_count < 8)
        contact_count++;
    total_contacts++;
}

PhoneBook::PhoneBook()
{
    // std::cout << "phone book Default Constructor called" << std::endl;
    contact_count = 0;
    total_contacts = 0;
}

PhoneBook::~PhoneBook()
{
    // std::cout << "phone book Destructor called" << std::endl;
}

void PhoneBook::print_table()
{
    std::string index = "Index";
    std::string firstname = "First Name";
    std::string lastname = "Last Name";
    std::string nickname = "Nickname";
    int index_entry;
    std::cout << std::right
    << std::setw(10) << index << "|"
    << std::setw(10) << firstname << "|"
    << std::setw(10) << lastname << "|"
    << std::setw(10) << nickname << "|"
    << std::endl;

    for (int i = 0; i < contact_count; i++)
    {
        std::cout << std::right << std::setw(10) << i << "|";
        if (contacts[i].get_first_name().length() > 10)
            std::cout << std::setw(10) << contacts[i].get_first_name().substr(0, 9) + "." << "|";
        else
            std::cout << std::setw(10) << contacts[i].get_first_name() << "|";
        if (contacts[i].get_last_name().length() > 10)
            std::cout << std::setw(10) << contacts[i].get_last_name().substr(0, 9) + "." << "|";
        else
            std::cout << std::setw(10) << contacts[i].get_last_name() << "|";
        if (contacts[i].get_nickname().length() > 10)
            std::cout << std::setw(10) << contacts[i].get_nickname().substr(0, 9) + "." << "|" << std::endl;
        else
            std::cout << std::setw(10) << contacts[i].get_nickname() << "|" << std::endl;
    }

    std::cout << "Enter contact index: ";
    std::cin >> index_entry;
    if (index_entry < 0 || index_entry > 7 || index_entry >= contact_count)
        std::cout << "No valid contact for that index." << std::endl;
    else
        contacts[index_entry].print_contact_info();
}
