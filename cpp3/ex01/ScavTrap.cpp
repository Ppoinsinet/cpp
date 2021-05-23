#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
: hitPoints(100), maxHitPoints(100), energyPoints(50), level(1),
meleeAttDamage(20), rangedAttDamage(15), armorReduction(3), name(newName)
{
    srand(time(NULL));
    std::cout << name << "is now appearing with constructor" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << name << " is now disappearing with destructor" << std::endl;
    
}

void vaulthunter_dot_exe(std::string const& target)
{
}
