#include "Character.hpp"

Character::Character(std::string newName)
: name(newName), size(0)
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

std::string const& Character::getName() const
{
    return name;
}

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
    for (idx; idx++; idx < 2)
        tab[idx] = tab[idx + 1];
    size--;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3 || !tab[idx])
        return ;
    tab[idx]->use(target);
}

void Character::operator=(Character& const tmp)
{
    size = tmp.size;
    name = tmp.name;
    for (int i = 0; i < 4; i++)
    {
        if (tmp.tab[i])
            tab[i] = tmp.tab[i]->clone();
    }
}