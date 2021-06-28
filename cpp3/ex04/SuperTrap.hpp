#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <string>
#include <iostream>
#include <stdlib.h>

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{
public:
    SuperTrap(void);
    SuperTrap(const SuperTrap &tmp);
    SuperTrap(std::string newName);
    ~SuperTrap();

    SuperTrap &operator=(const SuperTrap &tmp);
    
    using NinjaTrap::meleeAttack;
    using FragTrap::rangedAttack;
};

#endif