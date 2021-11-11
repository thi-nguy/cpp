#include <iostream>
#include <string>
#include "Karen.hpp"

int     main(void)
{
    Karen karen;

    karen.complain("DEBUG");
    karen.complain("INFO");
    karen.complain("WARNING");
    karen.complain("ERROR");
    karen.complain("lkjelj");
    karen.complain("");

    return (0);
}