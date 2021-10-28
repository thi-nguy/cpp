#include "PhoneBook.hpp"

void    PhoneBook::add(void)
{
    int i;
    int ret;

    i = 0;
    while (_contact_list[i].getStatus() == false && i < 8)
        i++;
    if (i == 8)
    {
        if (PhoneBook::add_to_full_list() != 0)
            return ;
    }
    else
    if (i != 8)
        _contact_list[i].addContact();
}

int    PhoneBook::add_to_full_list(void)
{
    std::string choice;

    std::cout << "Phonebook is full. Keep adding new contact will remove oldest contact." << std::endl;
    std::cout << "Keep adding new contact (y/n)?" << std::endl;
    std::getline(std::cin, choice);
    if (choice.length() != 1 || (choice.compare("y") != 0 && choice.compare("n") != 0))
    {
        std::cout << "Not a valid choice. Returning to the main menu" << std::endl << std::endl;
        return (1);
    }
    else
    {
        if (choice.compare("n") == 0)
        {
            std::cout << "Returning to the main menu" << std::endl;
            return (1);
        }
        else
        {
            for (int j = 0; j < 7; j++)
                _contact_list[j] = _contact_list[j + 1];
            _contact_list[7].clear();
            _contact_list[7].addContact();
            return (0);
        }
    }
}


void    PhoneBook::search(void)
{
    std::string choice;
    int choice_int;

    PhoneBook::display_contact_list();
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
    _contact_list[choice_int].display();
}

void    PhoneBook::display_contact_list(void)
{
    int i;
    int first_name_size;
    int last_name_size;
    int nick_name_size;
    int len;
    std::string output;

    std::cout << "     index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;

    i = 0;
    while(_contact_list[i].getStatus() == false && i < 8)
    {
        std::cout << "         " << i << "|";
        first_name_size = _contact_list[i].getFirstName().size();
        last_name_size = _contact_list[i].getLastName().size();
        nick_name_size = _contact_list[i].getNickName().size();
        if (first_name_size == 10)
            std::cout << _contact_list[i].getFirstName() << "|";
        else
            print_format(_contact_list[i].getFirstName().substr(0, 10));
        if (last_name_size == 10)
            std::cout << _contact_list[i].getLastName() << "|";
        else
            print_format(_contact_list[i].getLastName().substr(0, 10));
        if (nick_name_size == 10)
            std::cout << _contact_list[i].getNickName() << "|";
        else
            print_format(_contact_list[i].getNickName().substr(0, 10));
        std::cout << std::endl;
        i++;
    }
}

void    PhoneBook::print_format(std::string output)
{
    int len;
    int j;
    std::string result = "";

    if (output.size() < 10)
    {
        j = 0;
        len = 10 - output.size();
        result.append(len, ' ');
        result.append(output);
        std::cout << result << "|";
        return ;
    }
    else if (output.size() == 10)
    {
        output = output.substr(0, 9);
        output.append(".");
        std::cout << output << "|";
        return ;
    }
}


PhoneBook::PhoneBook(void)
{
    return ;
}

PhoneBook::~PhoneBook(void)
{
    return ;
}