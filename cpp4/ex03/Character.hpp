#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
    int        size;
    std::string name;
    AMateria *tab[4];
public:
    Character(std::string name);
    ~Character();

    std::string const& getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);

    void operator=(const Character& tmp);
};


#endif