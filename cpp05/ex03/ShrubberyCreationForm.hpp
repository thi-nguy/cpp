#ifndef SHRUBBERYCREATIONFROM_HPP
#define SHRUBBERYCREATIONFROM_HPP

#include "Form.hpp"
#include <iostream>
#include <string>
#include <fstream>

# define SB_SIGN_GRADE 145
# define SB_EXEC_GRADE 137

class ShrubberyCreationForm: public Form
{
    private:
        ShrubberyCreationForm(void);

    public:
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& other);
        ~ShrubberyCreationForm(void);
        ShrubberyCreationForm&  operator=(ShrubberyCreationForm const &rhs);
        
        void    execute(Bureaucrat const& executor) const;
};


#endif