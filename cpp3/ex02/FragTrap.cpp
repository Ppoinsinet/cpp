#include "FragTrap.hpp"


FragTrap::FragTrap(std::string newName)
: ClapTrap(newName)
{
    srand(time(NULL));
    std::cout << getName() << " (Frag) is appearing" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << getName() << " (Frag) is disappearing" << std::endl;
}

void FragTrap::attBoule(std::string const& target)
{
    std::cout << getName() << " use the famous attack \"Coup de Boule\" on " << target << std::endl;
}

void FragTrap::attFire(std::string const& target)
{
    std::cout << getName() << " sends a fireball on " << target << std::endl;
}

void FragTrap::attKick(std::string const& target)
{
    std::cout << getName() << " kicks " << target << std::endl;
}

void FragTrap::attSlap(std::string const& target)
{
    std::cout << getName() << " slaps " << target << "\'s face" << std::endl;
}

void FragTrap::attStun(std::string const& target)
{
    std::cout << getName() << " use stun on " << target << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const& target)
{
    if (getEnergyPoints() < 25)
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
    setEnergyPoints(getEnergyPoints() - 25);
}