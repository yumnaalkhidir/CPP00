#include "Contact.hpp"
#include "Phonebook.hpp"

int main(void)
{
    PhoneBook pb;
    std::string command;
    while(1)
    {
        std::cout << "Commands Allowed are: ADD, SEARCH, EXIT" << std::endl;
        std::cout << "Enter command: " << std::endl;
        std::getline(std::cin, command);
        if (!command.compare("ADD"))
            pb.add_contact();
        else if (!command.compare("SEARCH"))
            pb.print_table();
        else if (!command.compare("EXIT"))
        {
            std::cout << "Exiting to the Phone book" << std::endl;
            break;
        }
        std::cout << std::endl;
    }
}