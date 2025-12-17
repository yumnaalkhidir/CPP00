#include "Contact.hpp"

Contact::Contact()
{
    // std::cout << "contact Default Constructor called" << std::endl;
    first_name = "Unknown";
    last_name = "Unknown";
    nickname = "Unknown";
    phone_number = "Unknown";
    darkest_secret = "Unknown";
}

Contact::Contact(std::string f_name, std::string l_name, std::string nick_name, std::string number, std::string secret)
{
    first_name = f_name;
    last_name = l_name;
    nickname = nick_name;
    phone_number = number;
    darkest_secret = secret;
}

Contact::~Contact()
{
    // std::cout << "contact Destructor called" << std::endl;
}

void    Contact::set_first_name(std::string name)
{
    first_name = name;
}

void    Contact::set_last_name(std::string name)
{
    last_name = name;
}

void    Contact::set_nickname(std::string name)
{
    nickname = name;
}

void    Contact::set_phone_number(std::string number)
{
    phone_number = number;
}

void    Contact::set_darkest_secret(std::string secret)
{
    darkest_secret = secret;
}

std::string    Contact::get_first_name()
{
    return (first_name);
}

std::string    Contact::get_last_name()
{
    return (last_name);
}

std::string    Contact::get_nickname()
{
    return (nickname);
}

std::string    Contact::get_phone_number()
{
    return (phone_number);
}

std::string    Contact::get_darkest_secret()
{
   return (darkest_secret);
}

void    Contact::print_contact_info()
{
    std::cout << "First Name:" << get_first_name() << std::endl;
    std::cout << "Last Name:" << get_last_name() << std::endl;
    std::cout << "Nickname:" << get_nickname() << std::endl;
    std::cout << "Phone Number:" << get_phone_number() << std::endl;
    std::cout << "Darkest Secret :" << get_darkest_secret() << std::endl;
}