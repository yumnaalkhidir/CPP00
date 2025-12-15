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

    while(firstname.length() == 0)
    {
        std::cout << "Enter firstname: ";
        std::getline(std::cin, firstname);
    }
    while(lastname.length() == 0)
    {
        std::cout << "Enter lastname: ";
        std::getline(std::cin, lastname);

    }
    while(nickname.length() == 0)
    {
        std::cout << "Enter nickname: ";
        std::getline(std::cin, nickname);
    }
    while(number.length() == 0)
    {
        std::cout << "Enter number: ";
        std::getline(std::cin, number);
    }
    while(secret.length() == 0)
    {
        std::cout << "Enter secret: ";
        std::getline(std::cin, secret);
    }
    contacts[contact_count] = Contact(firstname, lastname, nickname, number, secret);
    contacts[contact_count].print_contact_info();
    contact_count++;
}

PhoneBook::PhoneBook()
{
    std::cout << "phone book Default Constructor called" << std::endl;
    contact_count = 0;
}

PhoneBook::~PhoneBook()
{
    std::cout << "phone book Destructor called" << std::endl;
}

void PhoneBook::print_table()
{
    std::string index = "Index";
    std::string firstname = "First Name";
    std::string lastname = "Last Name";
    std::string nickname = "Nickname";
    std::cout << std::right
    << std::setw(10) << index << "|"
    << std::setw(10) << firstname << "|"
    << std::setw(10) << lastname << "|"
    << std::setw(10) << nickname << "|"
    << std::endl;
    // std::cout << std::right 
    // << std::setw(10) << "0" << "|"
    // << std::setw(10) << contacts[0].get_first_name() << "|"
    // << std::setw(10) << contacts[0].get_last_name() << "|"
    // << std::setw(10) << contacts[0].get_nickname() << "|"
    // << std::endl;
    // std::cout << std::right 
    // << std::setw(10) << "1" << "|"
    // << std::setw(10) << contacts[1].get_first_name() << "|"
    // << std::setw(10) << contacts[1].get_last_name() << "|"
    // << std::setw(10) << contacts[1].get_nickname() << "|"
    // << std::endl;

    for (int i = 0; i < 8; i++)
    {
        std::cout << std::right << std::setw(10) << i << "|";
        if (contacts[i].get_first_name().length() > 10)
            std::cout << std::setw(10) << contacts[i].get_first_name().substr(0, 9) + "." << "|" << std::endl;
        else
            std::cout << std::setw(10) << contacts[i].get_first_name() << "|" << std::endl;
        std::cout << std::setw(10) << contacts[i].get_last_name() << "|" << std::endl;
        std::cout << std::setw(10) << contacts[i].get_nickname() << "|" << std::endl;
    }
}
