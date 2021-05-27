#ifndef ISQUAD_HPP
#define ISQUAD_HPP

#include <iostream>
#include <string>

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

class Squad : public ISquad
{
private:
    int count;
    ISpaceMarine *squad;
public:
    Squad();
    ~Squad();
    int getCount() const;
    ISpaceMarine* getUnit(int) const;
    int push(ISpaceMarine*);

    void operator=(const Squad& tmp);
};

#endif