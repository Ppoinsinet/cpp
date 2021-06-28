#include <string>
#include "HumanA.hpp"

void    HumanA::attack(void)
{
    std::cout << _name << " attacks with his "
    << _weapon.getType() << std::endl;
}

Weapon& HumanA::getWeapon(void) const
{ return (_weapon); }

HumanA::HumanA(std::string name, Weapon& weapon)
: _name(name), _weapon(weapon)
{}

HumanA::~HumanA(void)
{}