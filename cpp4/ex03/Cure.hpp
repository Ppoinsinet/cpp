#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class Cure : public AMateria
{
private:
    /* data */
public:
    Cure(/* args */);
    Cure(const Cure &tmp);
    Cure &operator=(const Cure &tmp);
    void use(ICharacter& target);
    Cure* clone() const;
    ~Cure();
};

#endif