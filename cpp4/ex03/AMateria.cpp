#include "AMateria.hpp"

AMateria::AMateria(std::string const& type)
: type(type), _xp(0)
{
}

AMateria::~AMateria()
{
}

std::string const& AMateria::getType() const
{
    return type;
}

unsigned int AMateria::getXP() const
{
    return _xp;
}

/*void AMateria::operator=(AMateria& target)
{
    type = target.type;
    _xp = target._xp;
}*/