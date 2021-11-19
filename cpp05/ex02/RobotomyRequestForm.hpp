#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

# define ROBOT_SIGN_GRADE 72
# define ROBOT_EXEC_GRADE 45

class RobotomyRequestForm: public Form
{
    private:
        RobotomyRequestForm(void);

    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm& other);
        ~RobotomyRequestForm(void);
        RobotomyRequestForm&  operator=(RobotomyRequestForm const &rhs);
        
        void    execute(Bureaucrat const& executor) const;
};


#endif