#include <iostream>

int main(int ac, char **av)
{
    int i;
	int j;
	char *str;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (i < ac)
		{
			j = 0;
			while (av[i][j] != '\0')
			{
				std::cout << (char)(std::toupper(av[i][j]));
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
    return (0);
}
