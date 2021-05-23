#include "ZombieEvent.hpp"
#include <random>

ZombieEvent::ZombieEvent(std::string type)
{
    _eventType = type;
}

ZombieEvent::~ZombieEvent(void)
{
}

Zombie *ZombieEvent::newZombie(std::string name)
{
    Zombie *tmp = new Zombie(_eventType, name);
    return (tmp);
}

Zombie  *ZombieEvent::randomChump(void)
{
    char tmp = 0;
    _name = "";
    for (int i = 0; i < 7; i++)
    {
        if (!i)
            tmp = rand() % 26 + 'A';
        else
            tmp = rand() % 26 + 'a';
        name += tmp;
    }
    Zombie *result = new Zombie(_eventType, name);
    return (result);
}