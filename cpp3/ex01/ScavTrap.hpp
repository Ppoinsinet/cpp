#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>
class ScavTrap
{
private:
    unsigned int hitPoints;
    unsigned int maxHitPoints;
    unsigned int energyPoints;
    unsigned int maxEnergyPoints;
    unsigned int level;
    std::string name;
    unsigned int meleeAttDamage;
    unsigned int rangedAttDamage;
    unsigned int armorReduction;
public:
    ScavTrap();
    ScavTrap(const ScavTrap &tmp);
    ScavTrap(std::string newName);
    ~ScavTrap();

    ScavTrap& operator=(const ScavTrap &tmp);

    void rangedAttack(std::string const& target);
    void meleeAttack(std::string const& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void challengeArm(std::string newcomer);
    void challengePush(std::string newcomer);
    void challengeRace(std::string newcomer);

    void challengeNewcomer(std::string newcomer);
};

#endif