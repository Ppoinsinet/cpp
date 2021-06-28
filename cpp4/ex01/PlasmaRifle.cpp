#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void)
: AWeapon("Plasma Rifle", 5, 21)
{ setOutput("* piouuu piouuu piouuu *"); }

PlasmaRifle::PlasmaRifle(const PlasmaRifle &tmp)
: AWeapon(tmp.name, tmp.APCost, tmp.damage)
{}

PlasmaRifle::~PlasmaRifle()
{}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &tmp)
{
    name = tmp.name;
    APCost = tmp.APCost;
    damage = tmp.damage;
    return *this;
}

void PlasmaRifle::attack(void) const
{ std::cout << getOutput() << std::endl; }