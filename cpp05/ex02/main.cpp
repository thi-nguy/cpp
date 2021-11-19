#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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

void testRobotomyRequestForm(int bureaucreatGrade)
{
	std::string target = "Android 18";
	std::string b_name = "Krillin";

	try 
	{
		RobotomyRequestForm r(target);
		Bureaucrat			b(b_name, bureaucreatGrade);

		r.beSigned(b);
		r.execute(b);

		// b.signForm(r);
		// b.executeForm(r);
	} 
	catch (std::exception& e) 
	{
		std::cerr << e.what() << std::endl;
	}
}

void testPresidentialPardonForm(int bureaucreatGrade)
{
	std::string target = "Voldemort";
	std::string b_name = "Albus Dumbledore";

	try 
	{
		PresidentialPardonForm p(target);
		Bureaucrat			b(b_name, bureaucreatGrade);

		// p.beSigned(b);
		// p.execute(b);

		b.signForm(p);
		b.executeForm(p);
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

	std::cout << "\nTest 02: Robotomy Request Form---------" << std::endl;
	testRobotomyRequestForm(46); // OK to sign, KO to execute
	testRobotomyRequestForm(72); // OK to sign, KO to execute
	testRobotomyRequestForm(73); // KO to sign, KO to execute
	testRobotomyRequestForm(151); // Bureaucrat's grade is too low
	testRobotomyRequestForm(0); // Bureaucrat's grade is too high
	testRobotomyRequestForm(45); // OK to sign, OK to execute

	std::cout << "\nTest 03: Presidential Pardon Form---------" << std::endl;
	testPresidentialPardonForm(24); // OK to sign, KO to execute
	testPresidentialPardonForm(25); // OK to sign, KO to execute
	testPresidentialPardonForm(26); // KO to sign, KO to execute
	testPresidentialPardonForm(151); // Bureaucrat's grade is too low
	testPresidentialPardonForm(0); // Bureaucrat's grade is too high
	testPresidentialPardonForm(5); // OK to sign, OK to execute

	return (0);
}