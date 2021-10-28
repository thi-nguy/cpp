#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
    public:
        Contact(void);
        ~Contact(void);

         // set
        void    setFirstName(std::string first_name);
        void    setLastName(std::string last_name);
        void    setNickName(std::string nick_name);
        void    setPhoneNumber(std::string phone_number);
        void    setDarkestSecret(std::string secret);

        // get
        std::string getFirstName(void);
        std::string getLastName(void);
        std::string getNickName(void);
        std::string getPhoneNumber(void);
        std::string getDarkestSecret(void);
        bool        getStatus(void);

        void    display(void);
        void    addContact(void);
        void    clear(void);
        bool    is_empty(void);

    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nick_name;
        std::string _phone_number;
        std::string _darkest_secret;
        bool _is_empty;
};

#endif /* CONTACT_HPP */