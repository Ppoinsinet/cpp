#include "AMateria.hpp"

AMateria::AMateria(void)
: type("air"), _xp(0)
{}

AMateria::AMateria(const AMateria &tmp)
: type(tmp.type), _xp(tmp._xp)
{}

AMateria::AMateria(std::string const& type)
: type(type), _xp(0)
{}

AMateria::~AMateria()
{}

AMateria &AMateria::operator=(const AMateria& target)
{
    type = target.type;
    _xp = target._xp;
    return *this;
}

std::string const& AMateria::getType() const { return type; }
unsigned int AMateria::getXP() const { return _xp; }

void AMateria::use(ICharacter& target)
{ _xp += 10; std::cout << "Using material on " << target.getName() << std::endl; }
