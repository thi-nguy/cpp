#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Array.hpp"


int	main(void)
{
	{
        srand(time(NULL));

        // Creating an int array by Array Class
        Array<int>	numbers(20);
        // Creating int array by normal way
        int	*mirror = new int[20];
        // Assigning random values to both array
        for (int i = 0; i < 20; i++)
        {
            const int value = rand() % 100;
            numbers[i] = value;
            mirror[i] = value;
        }
        //"Checking if two arrays are identical"
        for (int i = 0; i < 20; i++)
        {
            if (mirror[i] != numbers[i])
            {
                std::cerr << "Two arrays don't have identical values!!" << std::endl;
                delete[] mirror;
                return 1;
            }
        }
        std::cout << "Both array has idential values" << std::endl;
        delete[] mirror;
    }
    std::cout << std::endl;
    {
        std::cout << "Testing index operator []" << std::endl;
        Array<int>	numbers(20);
        for (int i = 0; i < 20; i++)
        {
            const int value = rand() % 100;
            numbers[i] = value;
        }
        std::cout << "Original  array: " << numbers << std::endl;
        try {
            std::cout << "Item at index -42 = " << numbers[-42] << std::endl;
        }
        catch(const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }

        try {
            std::cout << "Item at index 2 = " << numbers[2] << std::endl;
        }
        catch(const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }
    std::cout << std::endl;
    {
        std::cout << "Testing copy constructor and assignment operators - Deep copy" << std::endl;
        Array<int>	numbers(20);
        // Creating int array by normal way
        for (int i = 0; i < 20; i++)
        {
            const int value = rand() % 100;
            numbers[i] = value;
        }
        std::cout << "Original  array:          " << numbers << std::endl;
        Array<int>	tmp = numbers;
        std::cout << "Copy_array_1 original:    " << tmp << std::endl;
        Array<int>	dup(tmp);
        std::cout << "Copy_array_2 original:    " << dup << std::endl;

        std::cout << std::endl;

        std::cout << "Original  array:       " << numbers << std::endl;
        for (int i = 0; i < 20; i++)
        {
            const int value = rand() % 100;
            tmp[i] = value;
        }
        std::cout << "Modified copy_array_1: " << tmp << std::endl;
        for (int i = 0; i < 20; i++)
        {
            const int value = rand() % 100;
            dup[i] = value;
        }
        std::cout << "Modified copy_array_2: " << dup << std::endl;
    }
    std::cout << std::endl;
    {
        std::cout << "Testing Size function" << std::endl;
        Array<int>	numbers(20);
        std::cout << "Size of array = " << numbers.size() << std::endl;
    }
    std::cout << std::endl;
    {
        std::cout << "Testing Empty Constructor" << std::endl;
        Array<int>	numbers;
        std::cout << "Size of array =   " << numbers.size() << std::endl;
        std::cout << "Array created:    " << numbers << std::endl;
    }






}
