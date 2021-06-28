#include "Zombie.hpp"

Zombie::Zombie(void)
: _type("myType"), _name("")
{
    int tmp = 0;
    for (int i = 0; i < 7; i++)
    {
        if (!i)
            tmp = rand() % 26 + 'A';
        else
            tmp = rand() % 26 + 'a';
        _name += tmp;
    }
}

Zombie::Zombie(std::string type, std::string name)
: _type(type), _name(name)
{}

Zombie::~Zombie(void)
{}

std::string &Zombie::getName(void)
{ return _name; }

std::string &Zombie::getType(void)
{ return _type; }

void    Zombie::announce(void)
{
    std::cout << "<" << _name << " " << "(" << _type << ")>"
    << " Braiiiiiiiiiiinnnsssss" << std::endl;
}