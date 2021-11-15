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

        std::string     getIdea(unsigned int i) const;
        void            setIdea(unsigned int i, std::string idea);
};

#endif