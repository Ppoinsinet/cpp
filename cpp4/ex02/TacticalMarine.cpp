#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{ std::cout << "Tactical Marine ready for battle!" << std::endl; }

TacticalMarine::TacticalMarine(const TacticalMarine &tmp)
{ (void)tmp; std::cout << "Tactical Marine ready for battle!" << std::endl; }

TacticalMarine &TacticalMarine::operator=(const TacticalMarine &tmp)
{ (void)tmp; return *this; }

TacticalMarine::~TacticalMarine()
{ std::cout << "Aaargh..." << std::endl; }

TacticalMarine* TacticalMarine::clone() const
{
    TacticalMarine *tmp = new TacticalMarine();
    return (tmp);
}

void TacticalMarine::battleCry() const
{ std::cout << "For the holy PLOT!" << std::endl; }

void TacticalMarine::rangedAttack() const
{ std::cout << "* attacks with a bolter *" << std::endl; }

void TacticalMarine::meleeAttack() const
{ std::cout << "* attacks with a chainsword *" << std::endl; }