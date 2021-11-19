#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <string>

# define PP_SIGN_GRADE 25
# define PP_EXEC_GRADE 5

class PresidentialPardonForm: public Form
{
    private:
        PresidentialPardonForm(void);

    public:
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm& other);
        ~PresidentialPardonForm(void);
        PresidentialPardonForm&  operator=(PresidentialPardonForm const &rhs);
        
        void    execute(Bureaucrat const& executor) const;
};


#endif