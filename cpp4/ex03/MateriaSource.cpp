#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
: size(0)
{
    tab[0] = 0;
    tab[1] = 0;
    tab[2] = 0;
    tab[3] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &tmp)
{
    size = tmp.size;
    for (int k = 0; k < tmp.size; k++)
        tab[k] = tmp.tab[k]->clone();
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete tab[i];
    size = 0;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &tmp)
{
    for (int i = 0; i < 4; i++)
        delete tab[i];
    for (int k = 0; k < tmp.size; k++)
        tab[k] = tmp.tab[k]->clone();
    size = tmp.size;
    return *this;
}

void MateriaSource::learnMateria(AMateria *tmp)
{
    if (size >= 4 || !tmp)
        return ;
    //AMateria *copy = tmp->clone();
    //tab[size++] = copy;
    tab[size++] = tmp;
}

AMateria *MateriaSource::createMateria(std::string const& tmp)
{
    for (int i = 0; i < 4; i++)
    {
        if (tab[i] && tab[i]->getType() == tmp)
            return tab[i]->clone();
    }
    return 0;
}