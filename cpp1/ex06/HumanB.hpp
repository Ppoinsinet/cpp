#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon      *_weapon;
public:
    void        setWeapon(Weapon& weapon);
    void        attack(void);
    HumanB(std::string name);
    ~HumanB();
};


#endif