#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string newName)
: hitPoints(100), maxHitPoints(100), energyPoints(100), level(1),
meleeAttDamage(30), rangedAttDamage(20), armorReduction(5), name(newName)
{
    srand(time(NULL));
    std::cout << getName() << " (Clap) is appearing" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << name << " (Clap) is disappearing" << std::endl;
}

void ClapTrap::rangedAttack(std::string const& target)
{
    std::cout << name << " is using ranged attack on " << target << " and takes away " << getRangedAttDamage() << " health points" << std::endl;
}

void ClapTrap::meleeAttack(std::string const& target)
{
    std::cout << name << " is using melee attack on " << target << " and takes away " << getMeleeAttDamage() << " health points" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << name << " takes " << amount - getArmorReduction() << "damage !";
    setHitPoints(getHitPoints() - amount + getArmorReduction());
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << name << " gets repaired and gains ";
    if (getHitPoints() + amount > getMaxHitPoints())
        std::cout << getMaxHitPoints() - getHitPoints() << " health points";
    else
        std::cout << amount << " health points";
    setHitPoints(getHitPoints() + amount);
}

int ClapTrap::getHitPoints(void)
{
    return (hitPoints);
}
int ClapTrap::getMaxHitPoints(void)
{
    return maxHitPoints;
}
int ClapTrap::getEnergyPoints(void)
{
    return energyPoints;
}
int ClapTrap::getMaxEnergyPoints(void)
{
    return maxEnergyPoints;
}
int ClapTrap::getLevel(void)
{
    return level;
}
std::string ClapTrap::getName(void)
{
    return name;
}
int ClapTrap::getMeleeAttDamage(void)
{
    return meleeAttDamage;
}
int ClapTrap::getRangedAttDamage(void)
{
    return rangedAttDamage;
}
int ClapTrap::getArmorReduction(void)
{
    return armorReduction;
}
void ClapTrap::setHitPoints(int value)
{
    hitPoints = value;
    if (value < 0)
        hitPoints = 0;
    else if (value > maxHitPoints)
        hitPoints = maxHitPoints;
}
void ClapTrap::setMaxHitPoints(int value)
{
    maxHitPoints = value;
    if (maxHitPoints <= 0)
        maxHitPoints = 1;
}
void ClapTrap::setEnergyPoints(int value)
{
    energyPoints = value;
    if (energyPoints < 0)
        energyPoints = 0;
    else if (energyPoints > maxEnergyPoints)
        energyPoints = maxEnergyPoints;
}
void ClapTrap::setMaxHitPoints(int value)
{
    maxEnergyPoints = value;
    if (value <= 0)
        maxEnergyPoints = 1;
}
void ClapTrap::setLevel(int value)
{
    level = value;
    if (value < 0)
        level = 0;
}
void ClapTrap::setName(std::string value)
{
    name = value;
}
void ClapTrap::setMeleeAttDamage(int value)
{
    meleeAttDamage = value;
    if (value < 0)
        meleeAttDamage = 0;
}
void ClapTrap::setRangedAttDamage(int value)
{
    rangedAttDamage = value;
    if (value < 0)
        rangedAttDamage = 0;
}
void ClapTrap::setArmorReduction(int value)
{
    armorReduction = value;
    if (value < 0)
        armorReduction = 0;
}