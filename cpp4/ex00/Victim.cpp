#include "Victim.hpp"

Victim::Victim(std::string &name)
: name(name)
{
    std::cout << "Some random victim called " << name << "just appeared!" << std::endl;
}
Victim::~Victim(void)
{
    std::cout << "Victim " << name << " just died for no apparent reason!" << std::endl;
}

void Victim::introduce(void)
{
    std::cout << "I'm " << name << "and I like otters!" << std::endl;
}

void Victim::getPolymorphed(void) const
{
    std::cout << name << " has been turned into a cute little sheep!" << std::endl;
}
