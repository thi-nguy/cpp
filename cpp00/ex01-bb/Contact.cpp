#include "Contact.hpp"

Contact::Contact(void) 
{
    this->_first_name = "";
    this->_last_name = "";
    this->_nick_name = "";
    this->_phone_number = "";
    this->_darkest_secret = "";
    this->_is_empty = true;
}

Contact::~Contact(void)
{
    return ;
}

void    Contact::setFirstName(std::string first_name)
{
    this->_first_name = first_name;
}

void    Contact::setLastName(std::string last_name)
{
    this->_last_name = last_name;
}

void    Contact::setNickName(std::string nick_name)
{
    this->_nick_name = nick_name;
}

void    Contact::setPhoneNumber(std::string phone_number)
{
    this->_phone_number = phone_number;
}

void    Contact::setDarkestSecret(std::string secret)
{
    this->_darkest_secret = secret;
}

std::string Contact::getFirstName(void)
{
    return (this->_first_name);
}

std::string Contact::getLastName(void)
{
    return (this->_last_name);
}

std::string Contact::getNickName(void)
{
    return (this->_nick_name);
}

std::string Contact::getPhoneNumber(void)
{
    return (this->_phone_number);
}

std::string Contact::getDarkestSecret(void)
{
    return (this->_darkest_secret);
}

bool Contact::getStatus(void)
{
    return (this->_is_empty);
}

void    Contact::addContact(void)
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

bool     Contact::is_empty()
{
    if (this->getNickName().empty() && this->getFirstName().empty() && this->getLastName().empty() && this->getPhoneNumber().empty() && this->getDarkestSecret().empty())
        return (true);
    return (false);
}

void	Contact::clear()
{
	this->_first_name.clear();
	this->_last_name.clear();
	this->_nick_name.clear();
	this->_phone_number.clear();
	this->_darkest_secret.clear();
	this->_is_empty = true;
}

void    Contact::display(void)
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
        std::cout << "No entry for this index. Returning to the main menu.\n" << std::endl;
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