#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    hitPoints = 100;
    maxHitPoints = 100;
    energyPoints = 100;
    maxEnergyPoints = 100;
    meleeAttDamage = 30;
    rangedAttDamage = 20;
    armorReduction = 5;
    std::cout << name << " (Frag) is now appearing with constructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap &tmp) : ClapTrap(tmp.name)
{
    hitPoints = tmp.hitPoints;
    maxHitPoints = tmp.maxHitPoints;
    energyPoints = tmp.energyPoints;
    maxEnergyPoints = tmp.maxEnergyPoints;
    level = tmp.level;
    meleeAttDamage = tmp.meleeAttDamage;
    rangedAttDamage = tmp.rangedAttDamage;
    armorReduction = tmp.armorReduction;
    std::cout << name << " (Frag) is now appearing with copy constructor" << std::endl;
}

FragTrap::FragTrap(std::string newName) : ClapTrap(newName)
{
    hitPoints = 100;
    maxHitPoints = 100;
    energyPoints = 100;
    maxEnergyPoints = 100;
    level = 1;
    meleeAttDamage = 30;
    rangedAttDamage = 20;
    armorReduction = 5;
    std::cout << name << " (Frag) is now appearing with constructor" << std::endl;
}

FragTrap::~FragTrap()
{ std::cout << name << " (Frag) is now disappearing with destructor" << std::endl; }

FragTrap &FragTrap::operator=(const FragTrap &tmp)
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

void FragTrap::attBoule(std::string const& target)
{ std::cout << name << " uses the famous attack \"Coup de Boule\" on " << target << std::endl; }

void FragTrap::attFire(std::string const& target)
{ std::cout << name << " sends a fireball on " << target << std::endl; }

void FragTrap::attKick(std::string const& target)
{ std::cout << name << " kicks " << target << std::endl; }

void FragTrap::attSlap(std::string const& target)
{ std::cout << name << " slaps " << target << "\'s face" << std::endl; }

void FragTrap::attStun(std::string const& target)
{ std::cout << name << " use stun on " << target << std::endl; }

void FragTrap::vaulthunter_dot_exe(std::string const& target)
{
    if (energyPoints < 25)
    {
        std::cout << name << ": Not enough energy" << std::endl;
        return ;
    }
    void (FragTrap::*tab[5])(std::string const&);
    tab[0] = &FragTrap::attSlap;
    tab[1] = &FragTrap::attKick;
    tab[2] = &FragTrap::attBoule;
    tab[3] = &FragTrap::attStun;
    tab[4] = &FragTrap::attFire;
    int tmp = rand() % 5;
    (this->*tab[tmp])(target);
    energyPoints -= 25;
}