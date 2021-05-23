#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
: _weapon(NULL), _name(name)
{
}

HumanB::~HumanB(void)
{
}

void    HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
}

void    HumanB::attack(void)
{
    std::cout << _name << " attack with his " << _weapon->getType()
    << std::endl;
}