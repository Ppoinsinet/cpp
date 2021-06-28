#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:
    /* data */
public:
    PlasmaRifle();
    PlasmaRifle(const PlasmaRifle &tmp);
    ~PlasmaRifle();

    PlasmaRifle &operator=(const PlasmaRifle &tmp);

    void attack(void) const;
};


#endif