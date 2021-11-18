#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("unknown"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade)
: _name(name)
{
    if (grade <= 0)
        throw GradeTooHighException();
    if (grade >= 151)
        throw GradeTooLowException();
    _grade = grade;
}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
:_name(other._name), _grade(other._grade)
{
    *this = other;
}

Bureaucrat&     Bureaucrat::operator=(const Bureaucrat &rhs)
{
    if (this != &rhs)
    {
        _grade = rhs._grade;
    }
    return (*this);
}

std::string     Bureaucrat::getName(void) const
{
    return (_name);
}

int     Bureaucrat::getGrade(void) const
{
    return (_grade);
}

void              Bureaucrat::setGrade(int grade)
{
    if (grade <= 0)
    {
        throw GradeTooHighException();
    }
    if (grade >= 151)
    {
        throw GradeTooLowException();
    }
    _grade = grade;
}

void               Bureaucrat::increaseGrade(void)
{
    setGrade(_grade - 1);
}
void               Bureaucrat::decreaseGrade(void)
{
    setGrade(_grade + 1);
}

const char*     Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}

const char*     Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}

void            Bureaucrat::signForm(Form& form) const
{
    try
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signs " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << this->getName() << " cannot sign " << form.getName() << " because ";
        std::cerr << e.what() << std::endl;
    }
}

void	        Bureaucrat::executeForm(Form const& form) const // ! to do
{
    try
    {
        form.execute(*this);
        std::cout << this->getName() << " executes " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << this->getName() << " cannot execute " << form.getName() << " because ";
        std::cerr << e.what() << std::endl;
    }
}
    
std::ostream&   operator<<(std::ostream&    COUT, const Bureaucrat& bureaucrat)
{
    std::cout << bureaucrat.getName() << ", bureaucrat grade: " << bureaucrat.getGrade();
    return (COUT);
}
