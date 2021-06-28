#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
    hitPoints = 100;
    maxHitPoints = 100;
    energyPoints = 120;
    maxEnergyPoints = 120;
    level = 1;
    meleeAttDamage = 60;
    rangedAttDamage = 20;
    armorReduction = 5;
    std::cout << name << " (Super) is appearing" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &tmp)
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
    std::cout << name << " (Super) is appearing" << std::endl;
}

SuperTrap::SuperTrap(std::string newName)
: ClapTrap(newName)
{
    hitPoints = 100;
    maxHitPoints = 100;
    energyPoints = 120;
    maxEnergyPoints = 120;
    level = 1;
    name = newName;
    meleeAttDamage = 60;
    rangedAttDamage = 20;
    armorReduction = 0;
    std::cout << name << " (Super) is appearing" << std::endl;
}

SuperTrap::~SuperTrap(void)
{ std::cout << name << " (Super) is disappearing" << std::endl; }

SuperTrap &SuperTrap::operator=(const SuperTrap &tmp)
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

/*void SuperTrap::rangedAttack(const std::string &target)
{ FragTrap::rangedAttack(target); }

void SuperTrap::meleeAttack(const std::string &target)
{ NinjaTrap::meleeAttack(target); }*/