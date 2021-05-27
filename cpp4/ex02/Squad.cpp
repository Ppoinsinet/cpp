#include "Squad.hpp"

Squad::Squad()
: count(0), squad(0)
{
}

Squad::~Squad()
{
    ISpaceMarine *tmp = squad;
    ISpaceMarine *next = 0;
    for (int i = 0; i < count; i++)
    {
        next = tmp->getNext();
        delete tmp;
        tmp = next;
    }

}

int Squad::getCount(void) const
{
    return count;
}

int Squad::push(ISpaceMarine *ptr)
{
    if (!ptr)
        return (count);
    if (!count)
        this->squad = ptr;
    else
    {
        for (int j = 0; j < count; j++)
            if (ptr == getUnit(j))
                return (count);
    
        getUnit(count - 1)->setNext(ptr);
    }
    count++;
    return count;
}

ISpaceMarine *Squad::getUnit(int value) const
{
    if (value < 0 || value >= count || !squad)
        return 0;
    ISpaceMarine *tmp;
    int cursor = 0;

    tmp = squad;
    while(tmp && cursor < value)
    {
        tmp = tmp->getNext();
        cursor++;
    }
    return tmp;
}

void Squad::operator=(const Squad& tmp)
{
    ISpaceMarine *cursor, *next, *prev;
    cursor = squad;
    for(int i = 0; i < count; i++)
    {
        next = cursor->getNext();
        delete cursor;
        cursor = next;
    }
    count = 0;


    for(int j = 0; j < tmp.getCount(); j++)
    {
        push(tmp.getUnit(j)->clone());
    }
}