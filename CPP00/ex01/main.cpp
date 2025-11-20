#include "Contact.hpp"
#include "Phonebook.hpp"

int main(void)
{
    std::string command;
    while(1)
    {
        std::cin >> command;
        if (!command.std::string::compare("ADD"))
            std::cout << "Adding to the Phone book" << std::endl;
        else if (!command.std::string::compare("SEARCH"))
            std::cout << "Searching the Phone book" << std::endl;
        else if (!command.std::string::compare("EXIT"))
        {
            std::cout << "Exiting to the Phone book" << std::endl;
            exit(0);
        }
        else
            exit(1);
    }

}