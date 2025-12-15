#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class   Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        Contact();
        Contact(std::string f_name, std::string l_name,
            std::string nick_name, std::string number,
            std::string secret);
        ~Contact();
        void    set_first_name(std::string name);
        void    set_last_name(std::string name);
        void    set_nickname(std::string name);
        void    set_phone_number(std::string number);
        void    set_darkest_secret(std::string secret);
        std::string    get_first_name();
        std::string    get_last_name();
        std::string    get_nickname();
        std::string    get_phone_number();
        std::string    get_darkest_secret();
        void    print_contact_info();
};

#endif