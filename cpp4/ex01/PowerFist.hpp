#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
    PowerFist(/* args */);
    ~PowerFist();

    void attack(void) const;
};

#endif