#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
private:
    /* data */
public:
    Ice(/* args */);
    void use(ICharacter& target);
    Ice* clone() const;
    ~Ice();
};

#endif