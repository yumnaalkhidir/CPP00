#include "Phonebook.hpp"
#include <cctype>
#include <iomanip>

PhoneBook::PhoneBook()
{
    std::cout << "PhoneBook Default Constructor called" << std::endl;
    contact_count = 0;
    total_contacts = 0;
}

PhoneBook::~PhoneBook()
{
    std::cout << "PhoneBook Destructor called" << std::endl;
}

int check(std::string str, char check)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (check == 0 && (!std::isdigit(str[i]) && !std::isspace(str[i])))
        {
            std::cout << "Invalid. Field must contain digits only" << std::endl;
            return (0);
        }
        else if (check == 1 && (!std::isalpha(str[i]) && !std::isspace(str[i])))
        {
            std::cout << "Invalid. Field must contain letters only." << std::endl;
            return (0);
        }
    }
    return (1);
}

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
        if (firstname.empty() || !check(firstname, 1))
            return ;
    }
    while(lastname.length() == 0)
    {
        std::cout << "Enter Last Name: ";
        std::getline(std::cin, lastname);
        if (lastname.empty() || !check(lastname, 1))
            return ;
    }
    while(nickname.length() == 0)
    {
        std::cout << "Enter Nickname: ";
        std::getline(std::cin, nickname);
        if (nickname.empty())
            return ;
    }
    while(number.length() == 0)
    {
        std::cout << "Enter Phone Number: ";
        std::getline(std::cin, number);
        if (number.empty() || !check(number, 0))
            return ;
    }
    while(secret.length() == 0)
    {
        std::cout << "Enter Dark Secret: ";
        std::getline(std::cin, secret);
        if (secret.empty())
            return ;
    }
    index = total_contacts % 8;
    contacts[index] = Contact(firstname, lastname, nickname, number, secret);
    if (contact_count < 8)
        contact_count++;
    total_contacts++;
}

void PhoneBook::print_table()
{
    std::string index = "Index";
    std::string firstname = "First Name";
    std::string lastname = "Last Name";
    std::string nickname = "Nickname";
    int index_entry;
    std::string number;
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
    std::getline(std::cin, number);
    if (!check(number, 0))
        return ;
    index_entry = atoi(number.c_str());
    if (index_entry < 0 || index_entry > 7 || index_entry >= contact_count)
        std::cout << "Invalid index." << std::endl;
    else
        contacts[index_entry].print_contact_info();
}
