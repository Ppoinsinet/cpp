#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>

class ClapTrap
{
protected:
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
    ClapTrap();
    ClapTrap(const ClapTrap &tmp);
    ClapTrap(std::string newName);
    ~ClapTrap();

    ClapTrap &operator=(const ClapTrap &tmp);

    void rangedAttack(std::string const& target);
    void meleeAttack(std::string const& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string &getName(void);
};

#endif