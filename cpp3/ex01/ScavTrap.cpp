#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
: hitPoints(100), maxHitPoints(100), energyPoints(50), maxEnergyPoints(50), level(1),
name(""), meleeAttDamage(20), rangedAttDamage(15), armorReduction(3)
{ std::cout << name << " (ScavTrap) is now appearing with constructor" << std::endl; }

ScavTrap::ScavTrap(const ScavTrap &tmp)
: hitPoints(tmp.hitPoints), maxHitPoints(tmp.maxHitPoints), energyPoints(tmp.energyPoints), maxEnergyPoints(tmp.maxEnergyPoints), level(tmp.level),
name(tmp.name), meleeAttDamage(tmp.meleeAttDamage), rangedAttDamage(tmp.rangedAttDamage), armorReduction(tmp.armorReduction)
{ std::cout << name << " (ScavTrap) is now appearing with constructor" << std::endl; }


ScavTrap::ScavTrap(std::string newName)
: hitPoints(100), maxHitPoints(100), energyPoints(50), maxEnergyPoints(50), level(1),
name(newName), meleeAttDamage(20), rangedAttDamage(15), armorReduction(3)
{ std::cout << name << " (ScavTrap) is now appearing with constructor" << std::endl; }

ScavTrap &ScavTrap::operator=(const ScavTrap &tmp)
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

ScavTrap::~ScavTrap(void)
{ std::cout << name << " (ScavTrap) is now disappearing with destructor" << std::endl; }

void ScavTrap::rangedAttack(std::string const& target)
{ std::cout << name << " (ScavTrap) is using ranged attack on " << target << " and takes away " << rangedAttDamage << " health points" << std::endl; }

void ScavTrap::meleeAttack(std::string const& target)
{ std::cout << name << " (ScavTrap) is using melee attack on " << target << " and takes away " << meleeAttDamage << " health points" << std::endl; }

void ScavTrap::takeDamage(unsigned int amount)
{
    if (!hitPoints || amount <= armorReduction)
        return ;
    amount -= armorReduction;
    if (hitPoints < amount)
        amount = hitPoints;
    std::cout << name << " loses " << amount << " hitPoints !";
    hitPoints -= amount;
    std::cout << " He has now " << hitPoints << " hitPoints" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    std::cout << name << " gets repaired and gains ";
    if (hitPoints + amount > maxHitPoints)
        std::cout << maxHitPoints - hitPoints << " health points";
    else
        std::cout << amount << " health points";
    hitPoints += amount;
    if (hitPoints > maxHitPoints)
        hitPoints = maxHitPoints;
    std::cout << ", he has now " << hitPoints << std::endl;
}

void ScavTrap::challengeArm(std::string newcomer)
{ std::cout << name << " challenges " << newcomer << " to a arm wrestling" << std::endl; }
void ScavTrap::challengePush(std::string newcomer)
{ std::cout << name << " challenges " << newcomer << " to a push-up contest" << std::endl; }
void ScavTrap::challengeRace(std::string newcomer)
{ std::cout << name << " challenges " << newcomer << " to a race" << std::endl; }

void ScavTrap::challengeNewcomer(std::string newcomer)
{
    int tmp = rand() % 3;
    if (tmp == 0)
        challengeArm(newcomer);
    else if (tmp == 1)
        challengePush(newcomer);
    else
        challengeRace(newcomer);
}
