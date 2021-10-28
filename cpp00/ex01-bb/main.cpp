#include "PhoneBook.hpp"

int main(void)
{
    std::string command;
    PhoneBook phonebook;

    std::cout << ">> YOUR PHONEBOOK <<" << std::endl;
    while (command.compare("EXIT") != 0)
    {
        std::cout << "Please add a command." << std::endl;
        std::cout << "(ADD, SEARCH, EXIT)" << std::endl;
        std::getline(std::cin, command);
        if (command.compare("ADD") == 0)
            phonebook.add();
        else if (command.compare("SEARCH") == 0)
            phonebook.search();
        else if (command.compare("EXIT") != 0 && command.compare("ADD") != 0 &&command.compare("SEARCH") != 0)
            std::cout << "Command is invalid. Returning to the main menu\n" << std::endl;
    }
    std::cout << "Close the phonebook." << std::endl;
    return (0);
}






