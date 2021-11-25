#include "iter.hpp"
#include <string>

void	printSize(std::string const& str)
{
	std::cout << str.size() << " ";
}

template <typename T>
void	divide_by_two(T const& num)
{
	T ret = num / 2;
	std::cout << ret << " ";
}

int	main(void)
{
	std::cout	<< "------------------ int ------------------" << std::endl;
	{
		int				arr[] = {-1, 0, 934, 23, 24};
		size_t const	size = sizeof(arr) / sizeof(int);

		std::cout << "Original:	";
		for (size_t i = 0; i < size; i++)
			std::cout << arr[i] << ' ';
		std::cout << '\n';

		std::cout << "Divided by 2:	";
		iter(arr, size, divide_by_two);
	}
	std::cout	<< "\n------------------ float ------------------" << std::endl;
	{
		float			arr[] = {1.43f, 2.4f, 3.14f, 1.82f, -15.0f};
		size_t const	size = sizeof(arr) / sizeof(float);

		std::cout << "Original:	";
		for (size_t i = 0; i < size; i++)
			std::cout << arr[i] << ' ';
		std::cout << '\n';

		std::cout << "Divided by 2:	";
		iter(arr, size, divide_by_two);
	}

	std::cout	<< "\n------------------ string ------------------" << std::endl;
	{
		std::string		arr[] =
		{
			"Hello", "how", "are", "you", "doing", "?"
		};
		size_t const	size = sizeof(arr) / sizeof(std::string);

		std::cout << "\tOriginal String Array\n";
		for (size_t i = 0; i < size; i++)
			std::cout << arr[i] << ' ';
		std::cout << '\n';
		std::cout << "\tSize of each elements\n";


		iter(arr, 6, printSize);
	}
    return (0);
}
