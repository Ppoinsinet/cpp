#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include <string>
#include <iostream>

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:
    AssaultTerminator(/* args */);
    AssaultTerminator(const AssaultTerminator &tmp);
    ~AssaultTerminator();

    AssaultTerminator &operator=(const AssaultTerminator &tmp);

    AssaultTerminator* clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};

#endif