#include "include/phonebook.hpp"

PhoneBook::PhoneBook(void) // Constructor khong co return value
{
    this->_first_name = "";
    this->_last_name = "";
    this->_nick_name = "";
    this->_phone_number = "";
    this->_darkest_secret = "";
    this->_is_empty = true;
}

void    PhoneBook::setFirstName(std::string first_name)
{
    this->_first_name = first_name;
}

void    PhoneBook::setLastName(std::string last_name)
{
    this->_last_name = last_name;
}

void    PhoneBook::setNickName(std::string nick_name)
{
    this->_nick_name = nick_name;
}

void    PhoneBook::setPhoneNumber(std::string phone_number)
{
    this->_phone_number = phone_number;
}

void    PhoneBook::setDarkestSecret(std::string secret)
{
    this->_darkest_secret = secret;
}

std::string PhoneBook::getFirstName(void)
{
    return (this->_first_name);
}

std::string PhoneBook::getLastName(void)
{
    return (this->_last_name);
}

std::string PhoneBook::getNickName(void)
{
    return (this->_nick_name);
}

std::string PhoneBook::getPhoneNumber(void)
{
    return (this->_phone_number);
}

std::string PhoneBook::getDarkestSecret(void)
{
    return (this->_darkest_secret);
}

bool PhoneBook::getStatus(void)
{
    return (this->_is_empty);
}

void    PhoneBook::display(void)
{
    std::string out;
    std::string infos_name[5] = {
		"first name",
		"last name",
		"nickname",
		"phone number",
		"darkest secret"
	};
    if (this->getStatus() == true)
    {
        std::cout << "No entry for this index." << std::endl;
        return ;
    }
	for (int i = 0; i < 5; i++)
	{
		if (i == 0)
            out.assign(this->getFirstName());
        else if (i == 1)
            out.assign(this->getLastName());
		else if (i == 2)
            out.assign(this->getNickName());
        else if	(i == 3)
            out.assign(this->getPhoneNumber());
		else if (i == 4)
            out.assign(this->getDarkestSecret());
		std::cout << infos_name[i] << " : " << out << std::endl;
	}
}

void    PhoneBook::addContact(void)
{
    int i;
    std::string info_list[5] = {"first name", "last name", "nickname", "phone number", "darkest_secret"};

    std::string entry;
    i = 0;
    while (i < 5)
    {
        std::cout << info_list[i] << ": ";
        std::getline(std::cin, entry);
        if (i == 0)
            this->setFirstName(entry);
        else if (i == 1)
            this->setLastName(entry);
        else if (i == 2)
            this->setNickName(entry);
        else if (i == 3)
            this->setPhoneNumber(entry);
        else if (i == 4)
            this->setDarkestSecret(entry);
        i++;
    }
    if (this->is_empty() == false)
    {
        this->_is_empty = false;
        return ;
    }
    this->_is_empty = true;
}

bool     PhoneBook::is_empty()
{
    if (this->getNickName().empty() && this->getFirstName().empty() && this->getLastName().empty() && this->getPhoneNumber().empty() && this->getDarkestSecret().empty())
        return (true);
    return (false);
}

void	PhoneBook::clear()
{
	this->_first_name.clear();
	this->_last_name.clear();
	this->_nick_name.clear();
	this->_phone_number.clear();
	this->_darkest_secret.clear();
	this->_is_empty = true;
}
