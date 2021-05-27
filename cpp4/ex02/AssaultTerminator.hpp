#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include <string>
#include <iostream>

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
private:
    /* data */
public:
    AssaultTerminator(/* args */);
    ~AssaultTerminator();

    AssaultTerminator* clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};

#endif