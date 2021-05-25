#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string newName)
: FragTrap(newName), NinjaTrap(newName), ClapTrap(newName)
{
    setHitPoints(100);
    setMaxHitPoints(100);
    setEnergyPoints(120);
    setMaxHitPoints(120);
    setLevel(1);
    setMeleeAttDamage(60);
    setRangedAttDamage(20);
    setArmorReduction(0);

    std::cout << getName() << " (Super) is appearing" << std::endl;
}

SuperTrap::~SuperTrap(void)
{
    std::cout << getName() << " (Super) is disappearing" << std::endl;
}