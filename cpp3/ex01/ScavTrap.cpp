#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string newName)
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

void ScavTrap::rangedAttack(std::string const& target)
{
    std::cout << name << " is using ranged attack on " << target << " and takes away " << rangedAttDamage << " health points" << std::endl;
}

void ScavTrap::meleeAttack(std::string const& target)
{
    std::cout << name << " is using melee attack on " << target << " and takes away " << meleeAttDamage << " health points" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    std::cout << name << " takes " << amount - armorReduction << "damage !";
    hitPoints -= amount - armorReduction;
    if (hitPoints < 0)
        hitPoints = 0;
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
}

void ScavTrap::challengeArm(std::string newcomer)
{
    std::cout << name << "challenges " << newcomer
    << "to the arm wrestling" << std::endl;
}
void ScavTrap::challengePush(std::string newcomer)
{
    std::cout << name << "challenges " << newcomer
    << "to the push-up contest" << std::endl;
}
void ScavTrap::challengeRace(std::string newcomer)
{
    std::cout << name << "challenges " << newcomer
    << "to the a race" << std::endl;
}

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
