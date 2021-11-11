// ifstream (in file stream, like cin)
// ofstream (out file stream, like cout)
#include <fstream>
#include <iostream>
#include <string>

void    replaceString(std::string &str, std::string old_str, std::string new_str)
{
    int     found_position;
    int     current_position;
    
    current_position = 0;
    while (str.find(old_str, current_position) != -1)
    {
        found_position = str.find(old_str);
        str.erase(found_position, old_str.length());
        str.insert(found_position, new_str);
        current_position = found_position + new_str.length();
    }
}

int main(int ac, char **av)
{
    std::string     output_file;
    std::ifstream   i_file;
    char            c;
    std::string     content = "";
    std::ofstream   o_file;

    if (ac != 4)
    {
        std::cout << "error: number of arguments is not correct" << std::endl;
        std::cout << "Arguments: <File name> <string 1> <string 2>" << std::endl;
        return (0);
    }
    i_file.open(av[1]);
    if (i_file.is_open() == 0)
    {
        std::cout << "File link is not correct" << std::endl;
        return (0);
    }
    while (i_file.get(c))
        content += c;
    replaceString(content, av[2], av[3]);
    output_file = av[1];
    output_file = output_file + ".replace";
    o_file.open(output_file);
    if (o_file.is_open() == 0)
    {
        std::cout << "Error: cannot open new file" << std::endl;
        return (0);
    }
    o_file << content;
    i_file.close();
    o_file.close();
    return (0);
}
