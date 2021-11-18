#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

void	testDecrement(int grade)
{
	std::string		name = "Songoku";
	try
	{
		Bureaucrat b(name, grade);
		std::cout << "before: ";
		std::cout << b << std::endl;

		std::cout << "after : ";
		b.decreaseGrade();
		std::cout << b << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	testIncrement(int grade)
{
	std::string		name = "Poccolo";
	try
	{
		Bureaucrat b(name, grade);
		std::cout << "before: ";
		std::cout << b << std::endl;

		std::cout << "after : ";
		b.increaseGrade();
		std::cout << b << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	testConstructor(int grade)
{
	std::string		name = "ChiChi";

	try
	{
		Bureaucrat b(name, grade);
		std::cout << b << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int		main()
{
    std::cout << "Test 1---------------" << std::endl;
	testConstructor(-1);
	testConstructor(2);
	testConstructor(42);
	testConstructor(150);
	testConstructor(151);

    std::cout << "Test 2---------------" << std::endl;
	testIncrement(-1);
	testIncrement(0);
	testIncrement(1);
	testIncrement(2);
	testIncrement(42);
	testIncrement(150);
	testIncrement(151);

    std::cout << "Test 2---------------" << std::endl;
	testDecrement(-1);
	testDecrement(0);
	testDecrement(1);
	testDecrement(2);
	testDecrement(42);
	testDecrement(150);
	testDecrement(151);
}