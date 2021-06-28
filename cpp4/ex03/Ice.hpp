#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
private:
    /* data */
public:
    Ice(/* args */);
    Ice(const Ice &tmp);
    Ice &operator=(const Ice &tmp);
    void use(ICharacter& target);
    Ice* clone() const;
    ~Ice();
};

#endif