#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <stdlib.h>

class ZombieHorde
{
private:
    Zombie  *_horde;
    int     _n;
public:
    void    announce(void);
    ZombieHorde(int n);
    ~ZombieHorde();
};


#endif