#include <string>
#include "HumanA.hpp"

void    HumanA::attack(void)
{
    std::cout << _name << " attacks with his "
    << _weapon.getType() << std::endl;
}

Weapon& HumanA::getWeapon(void)
{
    return (_weapon);
}

HumanA::HumanA(std::string name, Weapon& weapon)
: _weapon(weapon)
{
    _name = name;
}

HumanA::~HumanA(void)
{
}