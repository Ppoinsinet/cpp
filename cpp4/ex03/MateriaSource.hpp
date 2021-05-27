#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *tab[4];
    char size;
public:
    MateriaSource(/* args */);
    ~MateriaSource();

    void learnMateria(AMateria *);
    AMateria *createMateria(std::string const& type);
};

#endif