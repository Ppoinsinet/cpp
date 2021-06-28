#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
: ClapTrap("")
{
    hitPoints = 100;
    maxHitPoints = 100;
    energyPoints = 50;
    maxEnergyPoints = 50;
    meleeAttDamage = 20;
    rangedAttDamage = 15;
    armorReduction = 3;
    std::cout << name << " (ScavTrap) is now appearing with constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &tmp)
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
    std::cout << name << " (ScavTrap) is now appearing with constructor" << std::endl;
}


ScavTrap::ScavTrap(std::string newName)
: ClapTrap(newName)
{
    hitPoints = 100;
    maxHitPoints = 100;
    energyPoints = 50;
    maxEnergyPoints = 50;
    meleeAttDamage = 20;
    rangedAttDamage = 15;
    armorReduction = 3;
    std::cout << name << " (ScavTrap) is now appearing with constructor" << std::endl;
}

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
