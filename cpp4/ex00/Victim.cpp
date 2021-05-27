#include "Victim.hpp"

Victim::Victim(std::string name)
: name(name)
{
    std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}
Victim::~Victim(void)
{
    std::cout << "Victim " << name << " just died for no apparent reason!" << std::endl;
}

std::string Victim::getName(void) const
{
    return (name);
}

void Victim::setName(std::string newName)
{
    name = newName;
}

void Victim::introduce(void)
{
    std::cout << "I'm " << name << "and I like otters!" << std::endl;
}

void Victim::getPolymorphed(void) const
{
    std::cout << name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream& operator<<(std::ostream& out, Victim& target)
{
    out << "I'm " << target.getName() << " and I like otters!" << std::endl;
    return (out);
}
