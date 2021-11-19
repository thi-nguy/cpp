#include "Intern.hpp"

Intern::Intern(void) {}

Intern::~Intern(void) {}

Intern::Intern(const Intern &other)
{
    *this = other;
}

Intern&     Intern::operator=(const Intern &rhs)
{
    if (this != &rhs) {}
    return (*this);
}

Form*       Intern::makeRobotForm(std::string const& target) const
{
    Form*   new_form = new RobotomyRequestForm(target);
    return (new_form);
}

Form*       Intern::makePardonForm(std::string const& target) const
{
    Form*   new_form = new PresidentialPardonForm(target);
    return (new_form);
}
Form*       Intern::makeShrubberyForm(std::string const& target) const
{
    Form*   new_form = new ShrubberyCreationForm(target);
    return (new_form);
}

Form*       Intern::makeForm(std::string const f_name, std::string const& f_target) const
{
    std::string form_names[] = {"robotomy request", "presidential pardon", "shrubbery creation"};

    Form* (Intern::*makeForm[3])(std::string const&) const = {
        &Intern::makeRobotForm,
        &Intern::makePardonForm,
        &Intern::makeShrubberyForm,
    };

    for (int i = 0; i < 3; i++)
    {
        if (form_names[i] == f_name)
        {
            std::cout << "Intern creates " << f_name << " form." << std::endl;;
            return ((this->*makeForm[i])(f_target));
        }
    }
    std::cout << "Form's name is not valid. Intern cannot create it." << std::endl;
    return (NULL);
}