#include "ZombieHorde.hpp"

int main()
{
    srand(time(NULL));
    
    ZombieHorde horde(150);
    horde.announce();
    
    return (0);
}