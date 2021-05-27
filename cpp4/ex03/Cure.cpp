#include "Cure.hpp"

Cure::Cure()
: AMateria("cure")
{
}

Cure::~Cure()
{
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure *Cure::clone() const
{
    Cure *ptr = new Cure();
    ptr->_xp = _xp;
    return ptr;
}