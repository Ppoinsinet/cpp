#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const& newName, int val_apcost, int val_damage)
{
    name = newName;
    APCost = val_apcost;
    damage = val_damage;
}

AWeapon::~AWeapon()
{
}

std::string AWeapon::getName() const
{
    return name;
}

int AWeapon::getAPCost() const
{
    return APCost;
}

int AWeapon::getDamage() const
{
    return damage;
}

std::string AWeapon::getOutput() const
{
    return (output);
}

void AWeapon::setName(std::string value)
{
    name = value;
}

void AWeapon::setAPCost(int value)
{
    if (value < 0)
        return ;
    APCost = value;
}

void AWeapon::setDamage(int value)
{
    if (value < 0)
        return ;
    damage = value;
}

void AWeapon::setOutput(std::string value)
{
    output = value;
}