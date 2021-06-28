#include "Cure.hpp"

Cure::Cure()
: AMateria("cure")
{}

Cure::Cure(const Cure &tmp)
: AMateria(tmp.type)
{ _xp = tmp._xp; }

Cure::~Cure()
{}

Cure &Cure::operator=(const Cure &tmp)
{ type = tmp.type; _xp = tmp._xp; return *this; }

void Cure::use(ICharacter& target)
{ _xp += 10; std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl; }

Cure *Cure::clone() const
{
    Cure *ptr = new Cure();
    ptr->_xp = _xp;
    return ptr;
}