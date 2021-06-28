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
    Character(void);
    Character(std::string const& name);
    Character(const Character &tmp);
    ~Character();

    Character &operator=(const Character& tmp);

    void recoverAP();
    void equip(AWeapon*);
    void attack(Enemy*);

    std::string const &getName(void) const;
    int getAP(void) const;
    AWeapon *getWeapon(void) const;
};

std::ostream& operator<<(std::ostream& out, Character& tmp);

#endif