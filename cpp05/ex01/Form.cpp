#include "Form.hpp"

Form::Form(void)
: _name("default_form"), 
    _gradeToSign(150), 
    _gradeToExec(150), 
    _isSigned(false) 
{}

Form::Form(std::string name, unsigned int gradeToSign, unsigned int gradeToExec)
: _name(name),
    _gradeToSign(gradeToSign), 
    _gradeToExec(gradeToExec),
    _isSigned(false) // ! throw exeption before or after gan gia tri?
{
    if (_gradeToSign <= 0 || _gradeToExec <= 0)
        throw Form::GradeTooHighException();
    if (_gradeToSign >= 151 || _gradeToExec >= 151)
        throw Form::GradeTooLowException();
}

Form::~Form(void) {}

Form::Form(const Form &other)
: _name(other._name),
    _gradeToSign(other._gradeToSign),
    _gradeToExec(other._gradeToExec),
    _isSigned(other._isSigned)
{
    *this = other;
}

Form&     Form::operator=(const Form &rhs)
{
    if (this != &rhs)
    {
        _isSigned = rhs._isSigned;
    }
    return (*this);
}

std::string     Form::getName(void) const
{
    return (_name);
}

int     Form::getGradeToSign(void) const
{
    return (_gradeToSign);
}

int     Form::getGradeToExec(void) const
{
    return (_gradeToExec);
}

bool            Form::getStatus(void) const
{
    return (_isSigned);
}

const char*     Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}

const char*     Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}

const char*     Form::GradeTooLowToSignException::what() const throw()
{
    return ("Grade is too low to sign");
}

const char*     Form::FormAlreadySignedException::what() const throw()
{
    return ("Form is already signed");
}

void            Form::beSigned(Bureaucrat const& bureaucrat)
{
    if (_gradeToSign < bureaucrat.getGrade())
	{
		throw GradeTooLowToSignException();
	}
    else if (_gradeToSign >= bureaucrat.getGrade() && _isSigned == true)
    {
        throw FormAlreadySignedException();
    }
    else
        _isSigned = true;
}

std::ostream	&operator<<(std::ostream &COUT, const Form& form)
{
	std::cout << form.getName();
    std::cout << ": grade to sign = " << form.getGradeToSign();
    std::cout << ", grade to execute = " << form.getGradeToExec();
    std::cout << ", is signed = " << (form.getStatus() ? "true" : "false");
    return (COUT);
}