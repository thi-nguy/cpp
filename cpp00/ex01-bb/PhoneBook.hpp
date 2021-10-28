#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream> //library
#include <string>
#include "Contact.hpp"


class PhoneBook
{
    public:
        PhoneBook(void);
        ~PhoneBook(void);

        // other functions
    

        void    add(void);
        void    search(void);
        void    display_contact_list(void);
        void    print_format(std::string output);
        int     add_to_full_list(void);

    private:
        Contact     _contact_list[8];
       

};


#endif