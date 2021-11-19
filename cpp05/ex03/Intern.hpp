#ifndef INTER_HPP
#define INTER_HPP

#include <stdexcept>
#include <string>
#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Form;

class Intern
{
    private:
        Form* makeRobotForm(std::string const& target) const;
        Form* makePardonForm(std::string const& target) const;
        Form* makeShrubberyForm(std::string const& target) const;

    public:
        Intern(void);
        ~Intern(void);
        Intern(const Intern& other);
        Intern&     operator=(const Intern &rhs);

        Form*    makeForm(std::string const f_name, std::string const& f_target) const;
};

#endif