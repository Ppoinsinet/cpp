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
    Character(void);
    Character(const Character &tmp);
    Character(std::string name);
    ~Character();
    
    Character &operator=(const Character& tmp);

    std::string const& getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};


#endif