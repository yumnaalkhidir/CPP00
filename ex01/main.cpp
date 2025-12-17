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
        std::cin >> command;
        if (!command.std::string::compare("ADD"))
        {
            std::cout << "Adding to the Phone book" << std::endl;
            pb.add_contact();

        }
        else if (!command.std::string::compare("SEARCH"))
        {
            std::cout << "Searching the Phone book" << std::endl;
            pb.print_table();
        }
        else if (!command.std::string::compare("EXIT"))
        {
            std::cout << "Exiting to the Phone book" << std::endl;
            break;
        }
        std::cout << std::endl;
    }
}