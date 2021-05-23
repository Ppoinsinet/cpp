#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent
{
private:
    std::string     _eventType;
public:
    Zombie *newZombie(std::string name);
    Zombie *randomChump(void);
    ZombieEvent(std::string type);
    ~ZombieEvent();
};

#endif