#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
: ClapTrap("")
{
    hitPoints = 60;
    maxHitPoints = 60;
    energyPoints = 120;
    maxEnergyPoints = 120;
    meleeAttDamage = 60;
    rangedAttDamage = 5;
    armorReduction = 0;
    std::cout << name << " (Ninja) is appearing with constructor" << std::endl;

}

NinjaTrap::NinjaTrap(const NinjaTrap &tmp)
: ClapTrap(tmp.name)
{
    hitPoints = tmp.hitPoints;
    maxHitPoints = tmp.maxHitPoints;
    energyPoints = tmp.energyPoints;
    maxEnergyPoints = tmp.maxEnergyPoints;
    level = tmp.level;
    meleeAttDamage = tmp.meleeAttDamage;
    rangedAttDamage = tmp.rangedAttDamage;
    armorReduction = tmp.armorReduction;
    std::cout << name << " (Ninja) is appearing with constructor" << std::endl;

}

NinjaTrap::NinjaTrap(std::string newName)
: ClapTrap(newName)
{
    hitPoints = 60;
    maxHitPoints = 60;
    energyPoints = 120;
    maxEnergyPoints = 120;
    meleeAttDamage = 60;
    rangedAttDamage = 5;
    armorReduction = 0;
    std::cout << name << " (Ninja) is appearing with constructor" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &tmp)
{
    hitPoints = tmp.hitPoints;
    maxHitPoints = tmp.maxHitPoints;
    energyPoints = tmp.energyPoints;
    maxEnergyPoints = tmp.maxEnergyPoints;
    level = tmp.level;
    meleeAttDamage = tmp.meleeAttDamage;
    rangedAttDamage = tmp.rangedAttDamage;
    armorReduction = tmp.armorReduction;
    return *this;
}

NinjaTrap::~NinjaTrap(void)
{ std::cout << name << " (Ninja) is disappearing" << std::endl; }

void NinjaTrap::ninjaShoebox(ClapTrap& target)
{ std::cout << name << " slaps " << target.getName() << std::endl; }

void NinjaTrap::ninjaShoebox(NinjaTrap& target)
{ std::cout << name << " salutes " << target.getName() << std::endl; }

void NinjaTrap::ninjaShoebox(ScavTrap& target)
{ std::cout << name << " hits " << target.getName() << std::endl; }

void NinjaTrap::ninjaShoebox(FragTrap& target)
{ std::cout << name << " stuns " << target.getName() << std::endl; }