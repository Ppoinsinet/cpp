#include "Squad.hpp"

Squad::Squad()
: count(0), squad(0)
{}

Squad::Squad(const Squad &tmp)
: count(0) ,squad(0)
{ *this = tmp; }

Squad::~Squad()
{
    squad_t *tmp = squad;
    squad_t *next = 0;
    for (int i = 0; i < count; i++)
    {
        next = tmp->next;
        delete tmp->unit;
        delete tmp;
        tmp = next;
    }
    count = 0;
}

Squad &Squad::operator=(const Squad& tmp)
{
    squad_t *cursor, *next;
    cursor = squad;
    for(int i = 0; i < count; i++)
    {
        next = cursor->next;
        delete cursor->unit;
        delete cursor;
        cursor = next;
    }
    count = 0;

    for(int j = 0; j < tmp.getCount(); j++)
    {
        push(tmp.getUnit(j)->clone());
    }
    return *this;
}

int Squad::getCount(void) const { return count; }

int Squad::push(ISpaceMarine *ptr)
{
    if (!ptr)
        return (count);
    if (!count)
    {
        squad = new squad_t;
        squad->unit = ptr;
        squad->next = 0;
    }
    else
    {
        for (int j = 0; j < count; j++)
            if (ptr == getUnit(j))
                return (count);
        squad_t *tmp = squad;
        for (int k = 0; k < count - 1; k++)
            tmp = tmp->next;
        tmp->next = new squad_t;
        tmp->next->unit = ptr;
        tmp->next->next = 0;
    }
    return ++count;
}

ISpaceMarine *Squad::getUnit(int value) const
{
    if (value < 0 || value >= count || !squad)
        return 0;
    squad_t *tmp;
    int cursor = 0;

    tmp = squad;
    while(tmp && cursor < value)
    {
        tmp = tmp->next;
        cursor++;
    }
    return tmp->unit;
}
