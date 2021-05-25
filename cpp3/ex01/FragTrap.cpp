#include "FragTrap.hpp"


FragTrap::FragTrap(std::string newName)
: hitPoints(100), maxHitPoints(100), energyPoints(100), level(1),
meleeAttDamage(30), rangedAttDamage(20), armorReduction(5), name(newName)
{
    srand(time(NULL));
    std::cout << name << "is now appearing with constructor" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << name << " is now disappearing with destructor" << std::endl;
}

void FragTrap::rangedAttack(std::string const& target)
{
    std::cout << name << " is using ranged attack on " << target << " and takes away " << rangedAttDamage << " health points" << std::endl;
}

void FragTrap::meleeAttack(std::string const& target)
{
    std::cout << name << " is using melee attack on " << target << " and takes away " << meleeAttDamage << " health points" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    std::cout << name << " takes " << amount - armorReduction << "damage !";
    hitPoints -= amount - armorReduction;
    if (hitPoints < 0)
        hitPoints = 0;
}

void FragTrap::beRepaired(unsigned int amount)
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

void FragTrap::attBoule(std::string const& target)
{
    std::cout << name << " use the famous attack \"Coup de Boule\" on " << target << std::endl;
}

void FragTrap::attFire(std::string const& target)
{
    std::cout << name << " sends a fireball on " << target << std::endl;
}

void FragTrap::attKick(std::string const& target)
{
    std::cout << name << " kicks " << target << std::endl;
}

void FragTrap::attSlap(std::string const& target)
{
    std::cout << name << " slaps " << target << "s face" << std::endl;
}

void FragTrap::attStun(std::string const& target)
{
    std::cout << name << " use stun on " << target << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const& target)
{
    if (energyPoints < 25)
    {
        std::cout << "Not enough energy" << std::endl;
        return ;
    }
    int tmp = rand() % 5;
    if (tmp == 0)
        attSlap(target);
    else if (tmp == 1)
        attKick(target);
    else if (tmp == 2)
        attStun(target);
    else if (tmp == 3)
        attBoule(target);
    else
        attFire(target);
    energyPoints -= 25;
}