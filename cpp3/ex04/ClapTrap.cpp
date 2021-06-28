#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
: hitPoints(100), maxHitPoints(100), energyPoints(100), maxEnergyPoints(100),level(1),
name(""), meleeAttDamage(30), rangedAttDamage(20), armorReduction(5)
{ std::cout << name << " (Clap) is appearing" << std::endl; }

ClapTrap::ClapTrap(const ClapTrap &tmp)
: hitPoints(tmp.hitPoints), maxHitPoints(tmp.maxHitPoints), energyPoints(tmp.energyPoints), maxEnergyPoints(tmp.maxEnergyPoints),level(tmp.level),
name(tmp.name), meleeAttDamage(tmp.meleeAttDamage), rangedAttDamage(tmp.rangedAttDamage), armorReduction(tmp.armorReduction)
{ std::cout << name << " (Clap) is appearing" << std::endl; }


ClapTrap::ClapTrap(std::string newName)
: hitPoints(100), maxHitPoints(100), energyPoints(100), maxEnergyPoints(100),level(1),
name(newName), meleeAttDamage(30), rangedAttDamage(20), armorReduction(5)
{ std::cout << name << " (Clap) is appearing" << std::endl; }

ClapTrap::~ClapTrap()
{ std::cout << name << " (Clap) is disappearing" << std::endl; }

ClapTrap &ClapTrap::operator=(const ClapTrap &tmp)
{
    hitPoints = tmp.hitPoints;
    maxHitPoints = tmp.maxHitPoints;
    energyPoints = tmp.energyPoints;
    maxEnergyPoints = tmp.maxEnergyPoints;
    level = tmp.level;
    name = tmp.name;
    meleeAttDamage = tmp.meleeAttDamage;
    rangedAttDamage = tmp.rangedAttDamage;
    armorReduction = tmp.armorReduction;
    return *this;
}

void ClapTrap::rangedAttack(std::string const& target)
{ std::cout << name << " is using ranged attack on " << target << " and takes away " << rangedAttDamage << " health points" << std::endl; }

void ClapTrap::meleeAttack(std::string const& target)
{ std::cout << name << " is using melee attack on " << target << " and takes away " << meleeAttDamage << " health points" << std::endl; }

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount <= armorReduction)
        return ;
    amount -= armorReduction;
    int tmp = amount;
    if (hitPoints < amount)
        tmp = hitPoints;
    std::cout << name << " takes " << tmp << " damages !";
    hitPoints -= tmp;
    std::cout << " He has now " << hitPoints << " HP" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!amount || hitPoints >= maxHitPoints)
        return ;
    int tmp = amount;
    if (hitPoints + tmp > maxHitPoints)
        tmp = maxHitPoints - hitPoints;
    std::cout << name << " (Clap) regains " << tmp << " HP!";
    hitPoints += tmp;
    std::cout << " He has now " << hitPoints << " HP" << std::endl;
}

std::string &ClapTrap::getName(void)
{ return name; }