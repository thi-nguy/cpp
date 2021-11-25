#include "whatever.hpp"

#include <string>
#include <iostream>

int main(void)
{
    {
        std::cout << "------ Test String type ---------" << std::endl;
        std::string str1 = "hehe1";
        std::string str2 = "hehe2";
        std::string str_max = max(str1, str2);
        std::string str_min = min(str1, str2);
        std::cout << "\tBefore Swap" << std::endl;
        std::cout << "str1: " << str1 << std::endl;
        std::cout << "str2: " << str2 << std::endl;
        swap(str1, str2);
        std::cout << "\tAfter Swap" << std::endl;
        std::cout << "str1: " << str1 << std::endl;
        std::cout << "str2: " << str2 << std::endl;
        std::cout << "string max: " << str_max << std::endl;
        std::cout << "string min: " << str_min << std::endl;
    }
    {
        std::cout << "\n------ Test Int type ---------" << std::endl;
        int num1 = 42;
        int num2 = 10;
        int int_max = max(num1, num2);
        int int_min = min(num1, num2);
        std::cout << "\tBefore Swap" << std::endl;
        std::cout << "num1: " << num1 << std::endl;
        std::cout << "num2: " << num2 << std::endl;
        swap(num1, num2);
        std::cout << "\tAfter Swap" << std::endl;
        std::cout << "num1: " << num1 << std::endl;
        std::cout << "num2: " << num2 << std::endl;
        std::cout << "int max: " << int_max << std::endl;
        std::cout << "int min: " << int_min << std::endl;
    }
    {
        std::cout << "\n------ Test Float type ---------" << std::endl;
        float x = 3.14, y = 6.18;
        std::cout << "\tBefore Swap" << std::endl;
        std::cout << "num1: " << x << std::endl;
        std::cout << "num2: " << y << std::endl;
        swap(x, y);
        std::cout << "\tAfter Swap" << std::endl;
        std::cout << "num1: " << x << std::endl;
        std::cout << "num2: " << y << std::endl;
        std::cout << "float max: " << max(x, y) << std::endl;
        std::cout << "float min: " << min(x, y) << std::endl;
        return (0);
    }
    return (0);
}