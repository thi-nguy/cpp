#ifndef DATA_HPP
#define DATA_HPP

#include <string>

class Data
{
    private:
        int             _age;
        std::string     _name;
        Data(void);

    public:
        ~Data(void);
        Data(Data const& other);
        Data&   operator=(Data const& rhs);
        Data(int age, std::string name);

        int getAge(void) const;
        std::string getName(void) const;
};

#endif