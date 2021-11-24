#include <iostream>
#include <cstdlib>
#include <ctime>
#include <set>
#include "Span.hpp"

#define RED		"\033[91m"
#define GREEN   "\033[92m"
#define NOCOLOR	"\033[0m"

#define LARG_SIZE	11000

int	main(void)
{

	std::cout << "\n-------------- SMALL VECTOR --------------\n";
	{
		std::cout	<< "Add a number to the zero-capacity vector\n";
		Span	sp(0);
		try
		{
			sp.addNumber(0);
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << '\n' << NOCOLOR;
		}
	}
	{
		std::cout	<< "\nOne-capacity vector:\n";
		Span	sp1(1);
		try
		{
			std::cout << "Add number\n";
			sp1.addNumber(42);
			std::cout << GREEN << "Add number succuessfuly" << NOCOLOR << std::endl; 
			std::cout << "Find longest and shortest spans\n";
			std::cout << GREEN << "Longest span found = " << sp1.longestSpan() << NOCOLOR << std::endl;
			std::cout << GREEN << "Shortes span found = " << sp1.shortestSpan() << NOCOLOR << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << NOCOLOR << std::endl;
		}
	}

	std::cout << "\n-------------- MEDIUM VECTOR --------------\n";
	{
		Span sp(5);

		sp.addNumber(8);
		sp.addNumber(3);
		sp.addNumber(34);
		sp.addNumber(7);
		sp.addNumber(2);
		std::cout	<< "My vector: [8, 3, 34, 7, 2]\n";

		std::cout	<< "Shortest span found 	= " << sp.shortestSpan()
					<< "\nLongest span found 	= " << sp.longestSpan() << '\n';
	}

	std::cout << "\n-------------- VERY LARGE VECTOR --------------\n";
	{
		srand(time(NULL));
		
		std::cout	<< "Creating a vector of " << LARG_SIZE << " random numbers\n";
		int	minNum = RAND_MAX, maxNum = 1;
		int	num;
		std::vector<int>	vec(LARG_SIZE);
		for (int i = 0; i < LARG_SIZE; i++)
		{
			num = rand();
			if (num < minNum)
				minNum = num;
			if (num > maxNum)
				maxNum = num;
			vec[i] = num;
		}
		std::cout	<< "Longest span is:	" << maxNum - minNum << '\n';
		std::sort(vec.begin(), vec.end());
		long	minDiff = RAND_MAX;
		long	diff;
		for (int i = 1; i < LARG_SIZE; i++)
		{
			diff = std::abs(vec[i] - vec[i - 1]);
			if (diff < minDiff)
				minDiff = diff;
			if (diff == 0)
				break ;
		}
		std::cout	<< "Shortest span is:	" << minDiff << '\n';
	
		Span	sp(LARG_SIZE);
		sp.addNumber(vec.begin(), vec.end());
		std::cout	<< "Longest span found	= " << sp.longestSpan() << '\n';
		std::cout	<< "Shortest span found	= " << sp.shortestSpan() << '\n';
	}
}
