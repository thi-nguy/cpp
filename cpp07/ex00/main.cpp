#include "whatever.hpp"

#include <string>
#include <iostream>


int main(void)
{
    {
        std::string str1 = "hehe1";
        std::string str2 = "hehe2";
        std::string str_max = max(str1, str2);
        std::string str_min = min(str1, str2);
        std::cout << "str1: " << str1 << std::endl;
        std::cout << "str2: " << str2 << std::endl;
        swap(str1, str2);
        std::cout << "str1: " << str1 << std::endl;
        std::cout << "str2: " << str2 << std::endl;
        std::cout << "string max: " << str_max << std::endl;
        std::cout << "string min: " << str_min << std::endl;

        int num1 = 42;
        int num2 = 10;
        int int_max = max(num1, num2);
        int int_min = min(num1, num2);
        std::cout << "num1: " << num1 << std::endl;
        std::cout << "num2: " << num2 << std::endl;
        swap(num1, num2);
        std::cout << "num1: " << num1 << std::endl;
        std::cout << "num2: " << num2 << std::endl;
        std::cout << "int max: " << int_max << std::endl;
        std::cout << "int min: " << int_min << std::endl;
    }
    std::cout << std::endl;
    {
        int a = 2;
        int b = 3;
        ::swap( a, b );
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min(a, b) = " << ::min( a, b ) << std::endl;
        std::cout << "max(a, b) = " << ::max( a, b ) << std::endl;
        std::string c = "chaine1";
        std::string d = "chaine2";
        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min(c, d) = " << ::min( c, d ) << std::endl;
        std::cout << "max(c, d) = " << ::max( c, d ) << std::endl;
        return 0;
    }
}