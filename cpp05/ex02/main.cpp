#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

/******************************** TESTS ********************************/

void	testShrubberyCreationForm(int bureaucreatGrade)
{
	std::string		target = "home";
	std::string		b_name = "Ron Weasly";

	try
	{
		ShrubberyCreationForm	s(target);
		Bureaucrat				b(b_name, bureaucreatGrade);

		s.beSigned(b);
		s.execute(b);
		// std::cout << "Check file " + target + "_shrubbery" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int		main()
{
	std::cout << "Test 01: Shrubbery Creation Form---------" << std::endl;
	testShrubberyCreationForm(138); // OK to sign, KO to execute
	testShrubberyCreationForm(145); // OK to sign, KO to execute
	testShrubberyCreationForm(146); // KO to sign, KO to execute
	testShrubberyCreationForm(151); // Bureaucrat's grade is too low
	testShrubberyCreationForm(0); // Bureaucrat's grade is too high
	testShrubberyCreationForm(137); // OK to sign, OK to execute

	
}