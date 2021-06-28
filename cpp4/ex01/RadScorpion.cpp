#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
: Enemy(80, "RadScorpion")
{ std::cout << "* click click click *" << std::endl; }

RadScorpion::RadScorpion(const RadScorpion &tmp)
: Enemy(tmp.HP, tmp.type)
{ std::cout << "* click click click *" << std::endl; }

RadScorpion::~RadScorpion()
{ std::cout << "* SPROTCH *" << std::endl; }

RadScorpion &RadScorpion::operator=(const RadScorpion &tmp)
{
    HP = tmp.HP;
    type = tmp.type;
    return *this;
}