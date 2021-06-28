#include "Weapon.hpp"

Weapon::Weapon(void)
: _type("")
{}

Weapon::Weapon(std::string type)
: _type(type)
{}

Weapon::~Weapon(void)
{}

std::string Weapon::getType(void) const
{ return (_type); }

void                Weapon::setType(std::string newType)
{ _type = newType; }