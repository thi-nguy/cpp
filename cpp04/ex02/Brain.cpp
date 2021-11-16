#include "Brain.hpp"

Brain::Brain(void)// ! : _ideas = ""; How to initiate a list?
{
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = "";
    std::cout << "Brain no_argument constructor called" << std::endl;
}

Brain::~Brain(void)
{
    std::cout << "Brain Deconstructor called" << std::endl;
}

Brain::Brain(const Brain &other_object)
{
    std::cout << "Brain Copy constructor called" << std::endl;
    *this = other_object;
}

Brain  &Brain::operator=(const Brain &rhs)
{
    int i;

    std::cout << "Brain Assignation operator called" << std::endl;
    if (this != &rhs)
    {
		for (i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
    }
    return (*this);
}

std::string     Brain::getIdea(unsigned int i) const
{
    return (_ideas[i]);
}

void            Brain::setIdea(unsigned int i, std::string idea)
{
    _ideas[i] = idea;
}