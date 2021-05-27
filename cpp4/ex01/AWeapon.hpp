#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>
#include <string>

class AWeapon
{
protected:
    std::string name;
    int damage;
    int APCost;
    std::string output;
public:
    AWeapon(std::string const& name, int apcost, int damage);

    std::string getName() const;
    int getAPCost(void) const;
    int getDamage(void) const;
    std::string getOutput(void) const;

    void setName(std::string);
    void setAPCost(int);
    void setDamage(int);
    void setOutput(std::string);

    virtual void attack() const = 0;


    virtual ~AWeapon();
};


#endif