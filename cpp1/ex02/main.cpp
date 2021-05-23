#include "ZombieEvent.hpp"

int main()
{
    ZombieEvent event("badGuy");

    Zombie *ptr = event.randomChump();
    ptr->announce();
    delete ptr;
    ptr = event.randomChump();
    ptr->announce();
    delete ptr;
    ptr = event.randomChump();
    ptr->announce();
    delete ptr;
    
    ptr = event.newZombie("John");
    ptr->announce();
    delete ptr;
    
    Zombie monZombie("Screamer", "Marie");
    monZombie.announce();
    return (0);
}