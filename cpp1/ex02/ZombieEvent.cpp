#include "ZombieEvent.hpp"
#include <stdlib.h>

ZombieEvent::ZombieEvent(std::string type)
: _eventType(type)
{}

ZombieEvent::~ZombieEvent(void)
{}

Zombie *ZombieEvent::newZombie(std::string name)
{ return new Zombie(_eventType, name); }

Zombie  *ZombieEvent::randomChump(void)
{
    char tmp = 0;
    std::string name = "";
    for (int i = 0; i < 7; i++)
    {
        if (!i)
            tmp = rand() % 26 + 'A';
        else
            tmp = rand() % 26 + 'a';
        name += tmp;
    }
    return new Zombie(_eventType, name);
}