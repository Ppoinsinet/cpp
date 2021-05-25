#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <string>
#include <iostream>
#include <stdlib.h>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
public:
    NinjaTrap(std::string newName);
    ~NinjaTrap();
    
    void ninjaShoebox(ClapTrap& target);
    void ninjaShoebox(ScavTrap& target);
    void ninjaShoebox(FragTrap& target);
    void ninjaShoebox(NinjaTrap& target);

};

#endif