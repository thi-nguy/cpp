#include "iter.hpp"

#include "iter.hpp"

template <typename T>
void	decrement(T &num)
{
	--num;
}

void	capitalize(std::string &str)
{
	for (unsigned int i = 0; i < str.size(); i++)
    {
        str[i] = (char)(std::toupper(str[i]));
    }
}

int	main(void)
{
	std::cout	<< "------------------ int ------------------" << std::endl;
	{
		int				arr[] = {-1, 0, 934, 23, 24};
		size_t const	size = sizeof(arr) / sizeof(int);

		std::cout << "Before iter: ";
		for (size_t i = 0; i < size; i++)
			std::cout << arr[i] << ' ';
		std::cout << '\n';

		iter(arr, size, decrement);

		std::cout << "After iter:  ";
		for (size_t i = 0; i < size; i++)
			std::cout << arr[i] << ' ';
		std::cout << '\n';
	}

	std::cout	<< "\n------------------ char ------------------" << std::endl;
	{
		char			arr[] = {'b', 'C', '9', '|', '+'};
		size_t const	size = sizeof(arr) / sizeof(char);

		std::cout << "Before iter: ";
		for (size_t i = 0; i < size; i++)
			std::cout << arr[i] << ' ';
		std::cout << '\n';

		iter(arr, size, decrement);

		std::cout << "After iter:  ";
		for (size_t i = 0; i < size; i++)
			std::cout << arr[i] << ' ';
		std::cout << '\n';
	}

	std::cout	<< "\n------------------ float ------------------" << std::endl;
	{
		float			arr[] = {1.43f, 2.4f, 3.14f, 1.82f, -15.0f};
		size_t const	size = sizeof(arr) / sizeof(float);

		std::cout << "Before iter: ";
		for (size_t i = 0; i < size; i++)
			std::cout << arr[i] << ' ';
		std::cout << '\n';

		iter(arr, size, decrement);

		std::cout << "After iter:  ";
		for (size_t i = 0; i < size; i++)
			std::cout << arr[i] << ' ';
		std::cout << '\n';
	}

	std::cout	<< "\n------------------ string ------------------" << std::endl;
	{
		std::string		arr[] =
		{
			"Who", "lET", "thE", "dogS", "OUT" "@!@#&*("
		};
		size_t const	size = sizeof(arr) / sizeof(std::string);

		std::cout << "Before iter: ";
		for (size_t i = 0; i < size; i++)
			std::cout << arr[i] << ' ';
		std::cout << '\n';

		iter(arr, size, capitalize);

		std::cout << "After iter:  ";
		for (size_t i = 0; i < size; i++)
			std::cout << arr[i] << ' ';
		std::cout << '\n';
	}
    return (0);
}
