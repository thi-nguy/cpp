#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <set>
#include <list>
#include "easyfind.hpp"

#define FOUND		"\033[92mFOUND\033[0m"
#define NOT_FOUND	"\033[91mNOT FOUND\033[0m"

template <typename T>
static void	testContainer(T &ctn)
{
	int	val = rand() % 30;
	std::cout << "Looking for " << val << ": ";
	try
	{
		easyfind(ctn, val);
		std::cout << FOUND << '\n';
	}
	catch(ValueNotFoundException &e)
	{
		std::cout << NOT_FOUND << '\n';
	}
}
int main(void)
{
	srand(time(NULL));
	std::vector<int> my_array(20);
	for (int i = 0; i < 20; i++)
	{
		my_array[i] = rand() % 30;
		std::cout << my_array[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "------ Test on Vector -------\n";
	for (int i = 0; i < 5; i++)
		testContainer(my_array);

	std::cout << "\n------ Test on Set -------\n";
	std::set<int> my_set(my_array.begin(), my_array.end());
	for (int i = 0; i < 5; i++)
		testContainer(my_set);

	std::cout << "\n------ Test on List -------\n";
	std::list<int> my_list(my_array.begin(), my_array.end());
	for (int i = 0; i < 5; i++)
		testContainer(my_list);

	return (0);
}