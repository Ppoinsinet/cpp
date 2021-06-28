#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    std::cout << "----------removes ice-------------\n";
    me->unequip(0);
    me->use(0, *bob);
    std::cout << "----------removes cure-------------\n\n";
    me->unequip(0);
    me->use(0, *bob);
    std::cout << "--------------------------------------\n";
    std::cout << "createMateria(\"unknown\") : " << src->createMateria("unknown") << std::endl;
    delete bob;
    delete me;
    delete src;
    return 0;
}
