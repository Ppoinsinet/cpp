#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
    PowerFist(/* args */);
    PowerFist(const PowerFist &tmp);
    ~PowerFist();

    PowerFist &operator=(const PowerFist &tmp);

    void attack(void) const;
};

#endif