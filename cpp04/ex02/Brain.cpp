#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain Default constructor called" << std::endl;
}

Brain::~Brain(void)
{
    std::cout << "Brain Deconstructor called" << std::endl;
}

Brain::Brain(const Brain &other_object)
{
    *this = other_object;
}

Brain  &Brain::operator=(const Brain &rhs)
{
    int i;

    if (this != &rhs)
    {
		for (i = 0; i < 100; i++)
			_ideas[i] = rhs._ideas[i];
    }
    std::cout << "Brain Assignation operator called" << std::endl;
    return (*this);
}