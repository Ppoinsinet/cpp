#include "PowerFist.hpp"

PowerFist::PowerFist()
: AWeapon("Power Fist", 8, 50)
{ setOutput("* pschhh... SBAM! *"); }

PowerFist::PowerFist(const PowerFist &tmp)
: AWeapon(tmp.name, tmp.APCost, tmp.damage)
{ setOutput("* pschhh... SBAM! *"); }

PowerFist::~PowerFist()
{}

PowerFist &PowerFist::operator=(const PowerFist &tmp)
{
    name = tmp.name;
    APCost = tmp.APCost;
    damage = tmp.damage;
    return *this;
}

void PowerFist::attack(void) const
{ std::cout << getOutput() << std::endl; }