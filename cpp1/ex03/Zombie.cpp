#include "Zombie.hpp"

Zombie::Zombie()
{
    _type = "myType";
    char tmp = 0;
    std::string name = "";
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
{
    _type = type;
    _name = name;
}

Zombie::~Zombie(void)
{
}

void    Zombie::announce(void)
{
    std::cout << "<" << _name << " " << "(" << _type << ")>"
    << " Braiiiiiiiiiiinnnsssss" << std::endl;
}