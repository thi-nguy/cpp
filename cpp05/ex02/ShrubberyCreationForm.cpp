#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
: Form("ShrubberyCreationForm", SB_SIGN_GRADE, SB_EXEC_GRADE, "no_target")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: Form("ShrubberyCreationForm", SB_SIGN_GRADE, SB_EXEC_GRADE, target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other): Form(other)
{
    *this = other;
}

ShrubberyCreationForm&     ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
    if (this != &rhs)
    {
        Form::operator=(rhs);
    }
    return (*this);
}

static std::string asciiTree(void)
{
    std::string s="";
    return (s + "                                       \n"
"       ###             ###\n" +
"      #o###           #o###\n" +
"    #####o###       #####o###\n" +
"   #o###|#####     #o###|#####\n" +
"    ####|##o#       ####|##o#\n" +
"       |||             |||\n" +
"       |||             |||   \n");
}

void    ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
    std::string file_name = this->getTarget() + "_shrubbery";
    std::ofstream   fs(file_name.c_str(), std::ios::trunc);

    Form::execute(executor);
    if (fs.is_open())
    {
        fs << asciiTree();
        fs.close();
        std::cout << executor.getName() << " executes " << this->getName()  << std::endl;
    }
    else
        std::cerr << "File cannot be created or opended\n";
}


