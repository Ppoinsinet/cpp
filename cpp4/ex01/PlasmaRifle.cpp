#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void)
: AWeapon("Plasma Rifle", 5, 21)
{
    setOutput("* piouuu piouuu piouuu *");
}

PlasmaRifle::~PlasmaRifle()
{
}

void PlasmaRifle::attack(void) const
{
    std::cout << getOutput() << std::endl;
}