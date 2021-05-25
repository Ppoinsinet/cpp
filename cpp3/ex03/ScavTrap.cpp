#include "ScavTrap.hpp"

void ScavTrap::challengeArm(std::string newcomer)
{
    std::cout << getName() << " challenges " << newcomer
    << " to the arm wrestling" << std::endl;
}
void ScavTrap::challengePush(std::string newcomer)
{
    std::cout << getName() << " challenges " << newcomer
    << " to the push-up contest" << std::endl;
}
void ScavTrap::challengeRace(std::string newcomer)
{
    std::cout << getName() << " challenges " << newcomer
    << " to the a race" << std::endl;
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

ScavTrap::~ScavTrap()
{
    std::cout << getName() << " (Scav) is disappearing" << std::endl;
}

ScavTrap::ScavTrap(std::string newName)
: ClapTrap(newName)
{
    std::cout << getName() << " (Scav) is appearing" << std::endl;
}
