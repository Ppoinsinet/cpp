#include "PowerFist.hpp"

PowerFist::PowerFist()
: AWeapon("Power Fist", 8, 50)
{
    setOutput("* pschhh... SBAM! *");
}

PowerFist::~PowerFist()
{
}

void PowerFist::attack(void) const
{
    std::cout << getOutput() << std::endl;
}