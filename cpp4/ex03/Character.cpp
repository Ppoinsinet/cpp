#include "Character.hpp"

Character::Character(void)
: size(0), name("unknown")
{
    tab[0] = 0;
    tab[1] = 0;
    tab[2] = 0;
    tab[3] = 0;
}

Character::Character(const Character &tmp)
: size(tmp.size), name(tmp.name)
{
    for (int i = 0; i < 4; i++)
    {
        if (tmp.tab[i])
            tab[i] = tmp.tab[i]->clone();
        else
            tab[i] = 0;
    }
}

Character::Character(std::string newName)
: size(0), name(newName)
{
    tab[0] = 0;
    tab[1] = 0;
    tab[2] = 0;
    tab[3] = 0;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (tab[i])
            delete tab[i];
    }
}

Character &Character::operator=(const Character& tmp)
{
    size = tmp.size;
    name = tmp.name;
    for (int i = 0; i < 4; i++)
    {
        if (tmp.tab[i])
            tab[i] = tmp.tab[i]->clone();
        else
            tab[i] = 0;
    }
    return *this;
}

std::string const& Character::getName() const { return name; }

void Character::equip(AMateria *m)
{
    if (size == 4 || !m)
        return ;
    tab[size++] = m;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3 || !tab[idx])
        return ;
    tab[idx] = 0;
    while (idx < 3)
    {
        tab[idx] = tab[idx + 1];
        idx++;
    }
    size--;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3 || !tab[idx])
        return ;
    tab[idx]->use(target);
}
