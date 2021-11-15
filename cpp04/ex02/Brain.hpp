#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    private:
        std::string _ideas[100];
    public:
        Brain(void);
        ~Brain(void);
        Brain   &operator=(const Brain &rhs);
        Brain(const Brain &other_object);

        Brain(std::string type);

};

#endif