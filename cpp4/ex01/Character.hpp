#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
    std::string name;
    int AP;
    AWeapon *current_weapon;
public:
    Character(std::string const& name);
    ~Character();

    void recoverAP();
    void equip(AWeapon*);
    void attack(Enemy*);

    std::string getName(void) const;
    int getAP(void) const;
    AWeapon *getWeapon(void) const;

    void setName(std::string name);
    void setAP(int);
    void setWeapon(AWeapon*);
};

std::ostream& operator<<(std::ostream& out, Character& tmp);

#endif