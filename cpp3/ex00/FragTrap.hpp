#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>

class FragTrap
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
    FragTrap();
    FragTrap(const FragTrap &tmp);
    FragTrap(std::string newName);
    ~FragTrap();

    FragTrap &operator=(const FragTrap &tmp);

    void rangedAttack(std::string const& target);
    void meleeAttack(std::string const& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void attSlap(std::string const& target);
    void attKick(std::string const& target);
    void attBoule(std::string const& target);
    void attStun(std::string const& target);
    void attFire(std::string const& target);
    
    void vaulthunter_dot_exe(std::string const& target);
};

#endif