#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
: Form("RobotomyRequestForm", ROBOT_SIGN_GRADE, ROBOT_EXEC_GRADE, "no_target")
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: Form("RobotomyRequestForm", ROBOT_SIGN_GRADE, ROBOT_EXEC_GRADE, target)
{}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): Form(other)
{
    *this = other;
}

RobotomyRequestForm&     RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
    if (this != &rhs)
    {
        Form::operator=(rhs);
    }
    return (*this);
}

void    RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    std::srand(std::time(NULL));
	int result = rand() % 2;

    Form::execute(executor);
    std::cout << "sizzle...sizzle...sizzle..." << std::endl;
    if (result)
        std::cout << this->getTarget() << " has been robotomized 50\% of the time" << std::endl;
	else
		std::cout << "It's a failure" << std::endl;
}
