#include "ZombieHorde.hpp"

int main()
{
    ZombieHorde horde(150);
    horde.announce();
    horde.~ZombieHorde();
    
    return (0);
}