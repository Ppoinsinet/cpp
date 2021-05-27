#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
: size(0)
{
    tab[0] = 0;
    tab[1] = 0;
    tab[2] = 0;
    tab[3] = 0;
}

void MateriaSource::learnMateria(AMateria *tmp)
{
    AMateria *copy = tmp->clone();
    tab[size++] = copy;
}

AMateria *MateriaSource::createMateria(std::string const& tmp)
{
    for (int i = 0; i < 4; i++)
    {
        if (tab[i]->getType() == tmp)
            return tab[i]->clone();
    }
    return 0;
}