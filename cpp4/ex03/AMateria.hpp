#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>

#include "ICharacter.hpp"

class AMateria
{
protected:
    std::string type;
    unsigned int _xp;
public:
    AMateria();
    AMateria(const AMateria &tmp);
    AMateria(std::string const& type);
    virtual ~AMateria();

    AMateria &operator=(const AMateria &tmp);

    std::string const& getType() const; //Returns the materia type
    unsigned int getXP() const; //Returns the Materia's XP
    
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif