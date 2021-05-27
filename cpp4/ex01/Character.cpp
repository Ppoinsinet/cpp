#include "Character.hpp"

Character::Character(std::string const& newName)
{
    name = newName;
    AP = 40;
    current_weapon = 0;
}

Character::~Character()
{
}

void Character::attack(Enemy *target)
{
    int tmp = getAP() - getWeapon()->getAPCost();
    if (tmp < 0)
        return ;
    setAP(tmp);
    std::cout << getName() << " attacks " << target->getType()
    << " with a " << getWeapon()->getName() << std::endl;
    getWeapon()->attack();
    target->takeDamage(getWeapon()->getDamage());
}

void Character::equip(AWeapon *tmp)
{
    setWeapon(tmp);
}

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

std::string Character::getName(void) const
{
    return (name);
}

int Character::getAP(void) const
{
    return (AP);
}

AWeapon *Character::getWeapon(void) const
{
    return (current_weapon);
}

void Character::setAP(int value)
{
    if (value < 0)
        return ;
    AP = value;
}

void Character::setName(std::string newName)
{
    name = newName;
}

void Character::setWeapon(AWeapon *tmp)
{
    current_weapon = tmp;
}