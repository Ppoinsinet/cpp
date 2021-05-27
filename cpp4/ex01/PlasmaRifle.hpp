#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:
    /* data */
public:
    PlasmaRifle();
    ~PlasmaRifle();
    void attack(void) const;
};


#endif