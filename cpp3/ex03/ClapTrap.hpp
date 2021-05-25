#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>
class ClapTrap
{
private:
    int hitPoints;
    int maxHitPoints;
    int energyPoints;
    int maxEnergyPoints;
    int level;
    std::string name;
    int meleeAttDamage;
    int rangedAttDamage;
    int armorReduction;
public:

    int getHitPoints(void);
    int getMaxHitPoints(void);
    int getEnergyPoints(void);
    int getMaxEnergyPoints(void);
    int getLevel(void);
    std::string getName(void);
    int getMeleeAttDamage(void);
    int getRangedAttDamage(void);
    int getArmorReduction(void);

    void setHitPoints(int value);
    void setMaxHitPoints(int value);
    void setEnergyPoints(int value);
    void setMaxEnergyPoints(int value);
    void setLevel(int value);
    void setName(std::string name);
    void setMeleeAttDamage(int value);
    void setRangedAttDamage(int value);
    void setArmorReduction(int value);

   // ClapTrap();
    ClapTrap(std::string newName);
    ~ClapTrap();
    void rangedAttack(std::string const& target);
    void meleeAttack(std::string const& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif