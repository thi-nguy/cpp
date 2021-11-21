#include <iostream>
#include <string>
#include <stdint.h>
#include <cstdlib>
#include <math.h>
#include <cctype>
#include <sstream>

/* Char
- 1 byte, 8bits
*/

/* Int
- 2 bytes, 16 bits

*/

/* Interger */

/* Float
- 4 bytes (32 bits). 1 bit for sign, 8 bits for exponent, 23 bits for value
- 6-digits before decimal, 7-digits after the decimal. Anything after that is truncated.
- Value range from: -3.4* 10^38 to 3.4* 10^30
*/

/* Double
- 8 bytes (64 bits). 1 bit for sign, 11 bits for exponent, 52 bits for value
- 10-digits before decimal, 15-digits after the decimal. Anything after that is truncated.
- Value range from: -1.7* 10^308 to 1.7* 10^308
*/

static bool    check_arg(std::string arg)
{
    // Check specific strings
    const std::string   valid_str[8] = {"-inff", "+inff", "inff", "nanf", "-inf", "inf", "+inf", "nan"};
    for (int i = 0; i < 8; i++)
        if (arg == valid_str[i])
            return (true);
            
    // Check first character
    if (isdigit(*arg.begin()) == false && *arg.begin() != '-')
        return (false);

    // Check the rest characters
    bool    isDot = false;
    bool    isF = false;

    std::string::iterator c;
    int i;
    for (c = arg.begin() + 1; c != arg.end(); c++)
    {
        i = *c;
        if (i == '.')
        {
            if (isDot == true)
                return (false);
            isDot = true;
        }
        else if (i == 'f')
        {
            if (isF == true || isDot == false || isdigit((*(c - 1))) == false)
                return (false);
            isF = true;
        }
        else if (isdigit(i) == false)
            return (false);
    }
    
    //check last character
    if (i == '.' || (isdigit(i) == true && isF == true))
        return (false);
    return (true);
}

static void     convertChar(double num)
{
    int c;

    if (isinf(num) || isnan(num))
        std::cout << "impossible";
    else
    {
        c = static_cast<int>(num);
        if (c >= 32 && c <= 126)
            std::cout << "'" << (char)c << "'";
        else
            std::cout << "non displayable";
    }
}

static void     convertInt(double num)
{
    int i;

    if (isinf(num) || isnan(num))
        std::cout << "impossible";
    else if (num < INT32_MIN || num > INT32_MAX)
        std::cout << "impossible";
    else
    {
        i = static_cast<int>(num);
        std::cout << i;
    }
}

static void     convertFloat(double num)
{
    std::stringstream sso; // ! string stream object
    sso << static_cast<float>(num); // ! insert input to the object

    std::string     string_output;
    sso >> string_output;

    if (!isinf(num) && !isnan(num))
    {
        size_t dot = string_output.find('.');
        if (dot == std::string::npos)
            string_output += ".0";
    }
    std::cout << string_output << "f";
}

static void     convertDouble(double num)
{
    std::stringstream sso;
    sso << static_cast<double>(num);

    std::string     string_output;
    sso >> string_output;

    if (!isinf(num) && !isnan(num))
    {
        size_t dot = string_output.find('.');
        if (dot == std::string::npos)
            string_output += ".0";
    }
    std::cout << string_output;
}

int     main(int ac, char** av)
{
    if (ac != 2 || check_arg(av[1]) == false)
    {
        std::cerr << "Invalid argument." << std::endl;
        return (1);
    }

    double num = atof(av[1]);
    std::cout << "char:     ";
    convertChar(num); std::cout << std::endl;
    std::cout << "int:      ";
    convertInt(num); std::cout << std::endl;
    std::cout << "float:    ";
    convertFloat(num); std::cout << std::endl;
    std::cout << "double:   ";
    convertDouble(num); std::cout << std::endl;

    return (0);
}