#include <iostream>
#include <string>

int     main(void)
{
    std::string     *stringPTR;
    std::string     my_string;
    std::string     &stringREF = my_string;

    my_string = "HI THIS IS BRAIN";
    stringPTR = &my_string;

    std::cout << &my_string << std::endl;
    std::cout << &stringREF << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << std::endl;

    std::cout << &stringPTR << std::endl;
    std::cout << std::endl;

    std::cout << my_string << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;



    return (0);
}
