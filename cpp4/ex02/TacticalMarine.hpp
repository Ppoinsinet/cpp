#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include <string>
#include <iostream>

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
public:
    TacticalMarine(/* args */);
    TacticalMarine(const TacticalMarine &tmp);
    TacticalMarine &operator=(const TacticalMarine &tmp);

    TacticalMarine *clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
    ~TacticalMarine();
};


#endif