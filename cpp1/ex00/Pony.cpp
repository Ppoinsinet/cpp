#include "Pony.hpp"

Pony::Pony(void)
: _color("red"), _gender("male")
{}

Pony::~Pony(void)
{
    std::cout << "Pony was destroyed\n";
}

void    Pony::setColor(std::string newColor)
{
    _color = newColor;
    std::cout << "Pony is now " << newColor << std::endl;
}

void    Pony::setGender(std::string newGender)
{
    _gender = newGender;
    std::cout << "Pony is now a " << newGender << std::endl;
}

std::string Pony::getColor(void)
{ return _color; }

std::string Pony::getGender(void)
{ return _gender; }


