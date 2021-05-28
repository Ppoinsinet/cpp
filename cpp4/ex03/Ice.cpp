#include "Ice.hpp"
#include "AMateria.hpp"
#include "Character.hpp"


Ice::Ice()
: AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice* Ice::clone() const
{
    Ice *tmp = new Ice();
    tmp->_xp = _xp;
    return (tmp);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
