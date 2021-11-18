#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string     _name;
        const int             _gradeToSign;
        const int             _gradeToExec;
        bool                  _isSigned;
        std::string           _target;
        Form(void); // to make creating an object with arguments mandatory
    
    public:
        Form(std::string name, int gradeToSign, int gradeToExec, std::string target);
        ~Form(void);
        Form(const Form& other);
        Form&     operator=(const Form &rhs);

        int    getGradeToSign(void) const;
        int    getGradeToExec(void) const;
        std::string     getName(void) const;
        bool            getStatus(void) const;
        std::string     getTarget(void) const;

        class GradeTooHighException: public std::exception
        {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException: public std::exception
        {
            public:
                const char* what() const throw();
        };

        class GradeTooLowToSignException: public std::exception
        {
            public:
                const char* what() const throw();
        };
        
        class GradeTooLowToExecuteException: public std::exception
        {
            public:
                const char* what() const throw();
        };

        class FormAlreadySignedException: public std::exception
        {
            public:
                const char* what() const throw();
        };

        class FormNotSignedException : public std::exception
		{
			const char* what() const throw();
		};

        void    beSigned(Bureaucrat const& bureaucrat);
        
        virtual void    execute(Bureaucrat const& executor) const = 0;
};

std::ostream&   operator<<(std::ostream &COUT, const Form &form);

#endif