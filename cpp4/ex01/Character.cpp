#include "Character.hpp"

Character::Character(void)
: name("Bob"), AP(40), current_weapon(0)
{}

Character::Character(const Character &tmp)
: name(tmp.name), AP(tmp.AP), current_weapon(tmp.current_weapon)
{}

Character::Character(std::string const& newName)
: name(newName), AP(40), current_weapon(0)
{}

Character::~Character()
{}

Character &Character::operator=(const Character &tmp)
{
    name = tmp.name;
    AP = tmp.AP;
    current_weapon = tmp.current_weapon;
    return *this;
}

void Character::attack(Enemy *target)
{
    if (!current_weapon)
        return ;
    int tmp = AP - current_weapon->getAPCost();
    if (tmp < 0)
        return ;
    AP = tmp;
    std::cout << getName() << " attacks " << target->getType() << " with a " << current_weapon->getName() << std::endl;
    current_weapon->attack();
    target->takeDamage(current_weapon->getDamage());
}

void Character::equip(AWeapon *tmp)
{ current_weapon = tmp; }

void Character::recoverAP(void)
{
    AP += 10;
    if (AP > 40)
        AP = 40;
}

std::ostream& operator<<(std::ostream& out, Character& tmp)
{
    out << tmp.getName() << " has " << tmp.getAP() << "AP";
    
    if (tmp.getWeapon()) 
        out << " and wields a " << tmp.getWeapon()->getName() << std::endl;
    else
        out << " and is unarmed" << std::endl;
    return (out);
}

std::string const &Character::getName(void) const { return (name); }
int Character::getAP(void) const { return (AP); }
AWeapon *Character::getWeapon(void) const { return (current_weapon); }