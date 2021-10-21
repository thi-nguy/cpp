#include "include/phonebook.hpp"

int main()
{
    std::string command;
    std::string entry;
    PhoneBook contacts[8];

    std::cout << ">> YOUR PHONEBOOK <<" << std::endl;
    while (command.compare("EXIT") != 0)
    {
        std::cout << "Please add a command." << std::endl;
        std::cout << "(ADD, SEARCH, EXIT)" << std::endl;
        std::getline(std::cin, command);
        if (command.compare("ADD") == 0)
            add(contacts);
        else if (command.compare("SEARCH") == 0)
            search(contacts);
    }
    std::cout << "Close the phonebook." << std::endl;
    return (0);
}

void    add(PhoneBook contact_list[8])
{
    int i;

    i = 0;
    while (contact_list[i].getStatus() == false && i < 8)
        i++;
    if (i == 8)
        add_to_full_list(contact_list);
    contact_list[i].addContact();
}

void    add_to_full_list(PhoneBook contact_list[8])
{
    std::string choice;

    std::cout << "Phonebook is full. Keep adding new contact will remove oldest contact." << std::endl;
    std::cout << "Keep adding new contact (y/n)?" << std::endl;
    std::getline(std::cin, choice);
    if (choice.length() != 1 || choice.compare("y") != 0 || choice.compare("n") != 0)
    {
        std::cout << "Not a valid choice. Returning to the main menu" << std::endl << std::endl;
        return ;
    }
    else
    {
        if (choice.compare("n") == 0)
        {
            std::cout << "Returning to the main menu" << std::endl;
            return ;
        }
        else
        {
            for (int j = 0; j < 7; j++)
                contact_list[j] = contact_list[j + 1];
            contact_list[7].clear();
            contact_list[7].addContact();
            return ;
        }
    }
}

void    search(PhoneBook contact_list[8])
{
    std::string choice;
    int choice_int;

    display_contact_list(contact_list);
    std::cout << "Choose an index." << std::endl;
    std::getline(std::cin, choice);
    if (choice.size() != 1 || isdigit(choice[0]) != 1)
    {
        std::cout << "Index is not valid. Returning to the main menu" << std::endl << std::endl;
        return ;
    }
    choice_int = std::stoi(choice);
    if (choice_int < 0 || choice_int > 7)
    {
        std::cout << "Index is not valid. Returning to the main menu" << std::endl << std::endl;
        return ;
    }
    contact_list[choice_int].display();
}

void    display_contact_list(PhoneBook contact_list[8])
{
    int i;
    int j;
    int len;
    std::string output;

    std::cout << " index | First Name | Last Name  | Nickname    " << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;

    i = 0;
    while(contact_list[i].getStatus() == false && i < 8)
    {
        std::cout << "     " << i << " | ";
        print_format(contact_list[i].getFirstName().substr(0, 10));
        print_format(contact_list[i].getLastName().substr(0, 10));
        print_format(contact_list[i].getNickName().substr(0, 10));
        std::cout << std::endl;
        i++;
    }
}

void    print_format(std::string output)
{
    int len;
    int j;

    if (output.size() < 10)
    {
        j = 0;
        len = 10 - output.size();
        output.append(len, ' ');
    }
    std::cout << output << " | ";
}
