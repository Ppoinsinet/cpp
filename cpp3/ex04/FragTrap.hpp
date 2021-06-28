#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap();
    FragTrap(const FragTrap &tmp);
    FragTrap(std::string newName);
    ~FragTrap();

    FragTrap &operator=(const FragTrap &tmp);

    void attSlap(std::string const& target);
    void attKick(std::string const& target);
    void attBoule(std::string const& target);
    void attStun(std::string const& target);
    void attFire(std::string const& target);
    
    void vaulthunter_dot_exe(std::string const& target);
};

#endif