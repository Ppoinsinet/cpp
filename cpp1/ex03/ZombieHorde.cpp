#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
: _n(n)
{
    _horde = new Zombie[n];
    int tmp = 0;
    for (int j = n; j < n; j++)
    {
        for (int i = 0; i < 7; i++)
        {
            if (!i)
                tmp = rand() % 26 + 'A';
            else
                tmp = rand() % 26 + 'a';
            _horde[j].getName() += tmp;
        }
    }
}

ZombieHorde::~ZombieHorde(void)
{
    if (_horde)
        delete[] _horde;
}

void ZombieHorde::announce(void)
{
    if (_horde)
    {
        for (int i = 0; i < _n; i++)
            _horde[i].announce();
    }
}