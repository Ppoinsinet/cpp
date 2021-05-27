#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include <string>
#include <iostream>

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
private:
    /* data */
public:
    TacticalMarine(/* args */);
    TacticalMarine *clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
    ~TacticalMarine();
};


#endif