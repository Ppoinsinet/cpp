#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main()
{
Character* me = new Character("me");
std::cout << *me;
Enemy* b = new RadScorpion();
AWeapon* pr = new PlasmaRifle();
AWeapon* pf = new PowerFist();
me->equip(pr);
std::cout << *me;
me->equip(pf);
me->attack(b);
std::cout << *me;
me->equip(pr);
std::cout << *me;
me->attack(b);
std::cout << *me;
me->recoverAP();
me->recoverAP();
me->recoverAP();
me->equip(0);
std::cout << *me;
me->attack(b);
me->equip(pr);
SuperMutant *super = new SuperMutant();

std::cout << "Debut fight : " << *me << std::endl;
std::cout << me->getAP() << " et " << super->getHP() << " et degat : " << me->getWeapon()->getDamage() << std::endl;

me->attack(super);
me->attack(super);
me->attack(super);
me->attack(super);
me->attack(super);
me->recoverAP();
me->recoverAP();
me->recoverAP();
me->recoverAP();
me->attack(super);
me->attack(super);
me->attack(super);
me->attack(super);
me->attack(super);

std::cout << std::endl << std::endl << std::endl;
delete me;
delete b;
delete pr;
delete pf;
return 0;
}