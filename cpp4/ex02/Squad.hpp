#ifndef ISQUAD_HPP
#define ISQUAD_HPP

#include <iostream>
#include <string>

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

typedef struct squad_element
{
    ISpaceMarine *unit;
    squad_element *next;
}               squad_t;

class Squad : public ISquad
{
private:
    int count;
    squad_t *squad;
public:
    Squad();
    Squad(const Squad &tmp);
    ~Squad();

    Squad &operator=(const Squad &tmp);

    int getCount() const;
    ISpaceMarine* getUnit(int) const;
    int push(ISpaceMarine*);
};

#endif