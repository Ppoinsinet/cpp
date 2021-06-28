#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *tab[4];
    int size;
public:
    MateriaSource(/* args */);
    MateriaSource(const MateriaSource &tmp);
    ~MateriaSource();
    MateriaSource &operator=(const MateriaSource &tmp);

    void learnMateria(AMateria *);
    AMateria *createMateria(std::string const& type);
};

#endif