#include "Pony.hpp"

Pony::Pony(void)
{
    _color = "red";
    _gender = "male";
}

Pony::~Pony(void)
{
}

void    Pony::changesColor(std::string newColor)
{
    _color = newColor;
    std::cout << "Pony is now " << newColor << std::endl;
}

void    Pony::changesGender(std::string newGender)
{
    _gender = newGender;
        std::cout << "Pony is now a " << newGender << std::endl;
}