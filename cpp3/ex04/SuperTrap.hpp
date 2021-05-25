#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <string>
#include <iostream>
#include <stdlib.h>

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap: virtual public FragTrap, virtual public NinjaTrap
{
public:
    using FragTrap::rangedAttack;
    using NinjaTrap::meleeAttack;
    SuperTrap(std::string newName);
    ~SuperTrap();
};

#endif