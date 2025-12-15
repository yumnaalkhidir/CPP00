#include "Contact.hpp"
#include "Phonebook.hpp"

int main(void)
{
    PhoneBook pb;
    std::string command;
    while(1)
    {
        std::cout << "Enter a command: " << std::endl;
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
            // ~pb.~PhoneBook();
            std::cout << "Exiting to the Phone book" << std::endl;
            break;
            // exit(0);
        }
    }

}