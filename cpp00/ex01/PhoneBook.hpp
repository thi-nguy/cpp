#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream> //library
#include <string>

class PhoneBook;//Prototypes
// Class definitions
class PhoneBook // ! PascalCase for class
{
    public: // ! camelCase for Method. under_score for variable
        PhoneBook(void); // prototype cua constructor

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
        bool getStatus(void);

        // other functions
        void    display(void);
        void    addContact(void);
        void    clear(void);
        bool    is_empty(void);

    private: // ! _under_score
        std::string _first_name;
        std::string _last_name;
        std::string _nick_name;
        std::string _phone_number;
        std::string _darkest_secret;
        bool _is_empty;

};

void    add(PhoneBook contact_list[8]); // ! under_score for normal
void    search(PhoneBook contact_list[8]);
void    display_contact_list(PhoneBook contact_list[8]);
void    print_format(std::string output);
void    add_to_full_list(PhoneBook contact_list[8]);

#endif
