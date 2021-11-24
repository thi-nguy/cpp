#include <iostream>
#include <cstdlib>
#include <ctime>
#include <set>
#include "Span.hpp"

#define RED		"\033[91m"
#define NOCOLOR	"\033[0m"

#define SPAN_SIZE	15000

int	main(void)
{

	std::cout << "\n===== SMALL SPAN =====\n";
	{
		Span	sp0(0);
		Span	sp1(1);
		try
		{
			// Comment lines while testing
			std::cout	<< "Trying to add a number to the zero-capacity span\n";
			sp0.addNumber(0);

			sp1.addNumber(1);
			std::cout	<< "Added a number to the one-capacity span\n"
						<< "Trying to find longest and shortest spans\n";
			sp1.longestSpan();
			sp1.shortestSpan();
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << '\n' << NOCOLOR;
		}
	}

	std::cout << "\n===== MEDIUM SPAN =====\n";
	{
		Span	*sp = new Span(5);

		sp->addNumber(5);
		sp->addNumber(3);
		sp->addNumber(17);
		sp->addNumber(9);
		sp->addNumber(11);
		std::cout	<< "New span created from: [5, 3, 17, 9, 11]\n";

		std::cout	<< "Shortest span is: " << sp->shortestSpan()			// should be 2 (3 and 5)
					<< "\nLongest span is: " << sp->longestSpan() << '\n';	// should be 14 (3 and 17)
		delete sp;
	}

	std::cout << "\n===== VERRRYYYY LARGE SPAN =====\n";
	{
		srand(time(NULL));
		
		std::cout	<< "Creating a large collection of " << SPAN_SIZE << " random numbers\n";
		int	minNum = 1, maxNum = 10000;
		int	num;
		std::vector<int>	vec(SPAN_SIZE);
		for (int i = 0; i < SPAN_SIZE; i++)
		{
			num = rand();
			if (num < minNum)
				minNum = num;
			if (num > maxNum)
				maxNum = num;
			vec[i] = num;
		}

		std::cout	<< "Longest span should be " << maxNum - minNum << '\n';
		std::sort(vec.begin(), vec.end());
		long	minDiff = 10000;
		long	diff;
		for (int i = 1; i < SPAN_SIZE; i++)
		{
			diff = std::abs(vec[i] - vec[i - 1]);
			if (diff < minDiff)
				minDiff = diff;
			if (diff == 0)
				break ;
		}
		std::cout	<< "Shortest span should be " << minDiff << '\n';
		std::cout	<< "\nNow working with our Span class\n\n";
	
		Span	sp(SPAN_SIZE);
		sp.addNumber(vec.begin(), vec.end());	// addNumber using range of iterators
		std::cout	<< "Longest span is " << sp.longestSpan() << '\n';
		std::cout	<< "Shortest span is " << sp.shortestSpan() << '\n';
	}
}
