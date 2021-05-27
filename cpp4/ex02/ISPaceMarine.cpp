#include "ISpaceMarine.hpp"

ISpaceMarine::ISpaceMarine()
: next(0)
{
}

ISpaceMarine::~ISpaceMarine(void)
{
}

ISpaceMarine *ISpaceMarine::getNext(void) const
{
    return (next);
}

void ISpaceMarine::setNext(ISpaceMarine *value)
{
    next = value;
}