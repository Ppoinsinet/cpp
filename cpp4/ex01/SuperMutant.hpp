#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"


class SuperMutant : public Enemy
{
private:
    /* data */
public:
    SuperMutant(/* args */);
    SuperMutant(const SuperMutant &tmp);
    ~SuperMutant();

    SuperMutant &operator=(const SuperMutant &tmp);

    void takeDamage(int value);
};

#endif