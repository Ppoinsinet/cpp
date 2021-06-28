#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"
#include "AssaultTerminator.hpp"

int main()
{
ISpaceMarine* bob = new TacticalMarine;
ISpaceMarine* jim = new AssaultTerminator;
Squad *vlc = new Squad();
vlc->push(bob);
vlc->push(jim);
for (int i = 0; i < vlc->getCount(); ++i)
{
    ISpaceMarine* cur = vlc->getUnit(i);
    cur->battleCry();
    cur->rangedAttack();
    cur->meleeAttack();
}

std::cout << "---------------Marines clone function------------------\n";

ISpaceMarine *tmp = bob->clone();
tmp->battleCry();
delete tmp;

std::cout << "\n";

tmp = jim->clone();
tmp->battleCry();
delete tmp;

std::cout << "\n";



std::cout << "---------------Marines are being deeply copied------------------\n";
Squad *vlc2 = new Squad(*vlc);
std::cout << "newSquad has count : " << vlc2->getCount() << std::endl;
delete vlc;
vlc2->getUnit(1)->battleCry();
delete vlc2;

return 0;
}
