#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
: Form("PresidentialPardonForm", PP_SIGN_GRADE, PP_EXEC_GRADE, "no_target")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: Form("PresidentialPardonForm", PP_SIGN_GRADE, PP_EXEC_GRADE, target)
{}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other): Form(other)
{
    *this = other;
}

PresidentialPardonForm&     PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
    if (this != &rhs)
    {
        Form::operator=(rhs);
    }
    return (*this);
}

void    PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
    Form::execute(executor);
    std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebroxe" << std::endl;
}
