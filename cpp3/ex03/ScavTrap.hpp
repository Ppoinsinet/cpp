#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>
#include "ClapTrap.hpp"
class ScavTrap: public ClapTrap
{
public:
    ScavTrap(std::string newName);
    ~ScavTrap();

    void challengeArm(std::string newcomer);
    void challengePush(std::string newcomer);
    void challengeRace(std::string newcomer);

    void challengeNewcomer(std::string newcomer);
};

#endif