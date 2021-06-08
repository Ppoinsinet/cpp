#include <string>
#include <iostream>
#include <stdlib.h>

bool checkError(std::string tmp)
{
    for (int i = 0; i < tmp.size(); i++)
    {
        if (((tmp.data()[i] >= 'a' && tmp.data()[i] <= 'z') || (tmp.data()[i] >= 'A' && tmp.data()[i] <= 'Z'))
        && tmp.data()[i] != 'f')
            return true;
    }
    return false;
}

void result(double value)
{
    std::cout << "char : ";
    if (value < 127 && value > 32)
        std::cout << '\'' <<static_cast<char>(value) << '\'' << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
    std::cout << "int : " << static_cast<int>(value) << std::endl;
    std::cout.precision(2);
    std::cout << "float : " << static_cast<float>(value) << "f" << std::endl;
    std::cout << "double : " << static_cast<double>(value) << std::endl;
}

int main(int ac, char **av)
{
    std::string tmp = av[1];
    /*if (checkError(tmp))
    {
        std::cout << "Error\n";
        return (1);
    }*/
    try
    {
        std::cout << std::fixed;
        result(std::stod(tmp));
    }
    catch (std::exception const& e)
    {
        std::cout << "Error\n";
    }
        
    return 0;
}