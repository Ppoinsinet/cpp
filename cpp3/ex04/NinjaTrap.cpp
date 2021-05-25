#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string newName)
: ClapTrap(newName)
{
    setHitPoints(60);
    setMaxHitPoints(60);
    setEnergyPoints(120);
    setMaxEnergyPoints(120);
    setLevel(1);
    setMeleeAttDamage(60);
    setRangedAttDamage(5);
    setArmorReduction(0);

    std::cout << getName() << " (Ninja) is appearing" << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
    std::cout << getName() << " (Ninja) is disappearing" << std::endl;
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