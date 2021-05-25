#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
public:
    FragTrap(std::string newName);
    ~FragTrap();

    void attSlap(std::string const& target);
    void attKick(std::string const& target);
    void attBoule(std::string const& target);
    void attStun(std::string const& target);
    void attFire(std::string const& target);
    
    void vaulthunter_dot_exe(std::string const& target);
};

#endif