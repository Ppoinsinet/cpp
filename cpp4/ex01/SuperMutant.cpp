#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
: Enemy(170, "Super Mutant")
{ std::cout << "Gaaah. Me want smash heads!" << std::endl; }

SuperMutant::SuperMutant(const SuperMutant &tmp)
: Enemy(tmp.HP, tmp.type)
{ std::cout << "Gaaah. Me want smash heads!" << std::endl; }

SuperMutant::~SuperMutant()
{ std::cout << "Aaargh..." << std::endl; }

SuperMutant &SuperMutant::operator=(const SuperMutant &tmp)
{
    HP = tmp.HP;
    type = tmp.type;
    return *this;
}

void SuperMutant::takeDamage(int value)
{
    int tmp = value;
    if (tmp <= 3)
        tmp = 0;
    else
        tmp -= 3;
    Enemy::takeDamage(tmp);
}