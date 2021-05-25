#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string newName)
: ClapTrap(newName)
{
    ClapTrap::setHitPoints(60);
    ClapTrap::setMaxHitPoints(60);
    ClapTrap::setEnergyPoints(120);
    ClapTrap::setMaxEnergyPoints(120);
    ClapTrap::setLevel(1);
    
}

void NinjaTrap::ninjaShoebox(ClapTrap& target)
{
    std::cout << getName() << " stuns " << target.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap& target)
{
    std::cout << getName() << " stuns " << target.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap& target)
{
    std::cout << getName() << " stuns " << target.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap& target)
{
    std::cout << getName() << " stuns " << target.getName() << std::endl;
}