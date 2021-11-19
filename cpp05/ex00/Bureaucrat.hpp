#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <stdexcept>
#include <string>
#include <iostream>

class Bureaucrat
{
    private:
        const std::string   _name;
        int                 _grade;
        Bureaucrat(void);

    public:
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat(void);
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat&     operator=(const Bureaucrat &rhs);

        int             getGrade(void) const;
        std::string     getName(void) const;
        void            setGrade(int grade);

        void            increaseGrade(void);
        void            decreaseGrade(void);

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
};

std::ostream    &operator<<(std::ostream &COUT, const Bureaucrat &bureaucrat);

#endif