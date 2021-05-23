#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
    Zombie *ptr = new Zombie[n];
    _n = n;
    _horde = ptr;
}

ZombieHorde::~ZombieHorde(void)
{
    if (_horde)
        delete _horde;
}

void ZombieHorde::announce(void)
{
    if (_horde)
    {
        for (int i = 0; i < _n; i++)
            _horde[i].announce();
    }
}