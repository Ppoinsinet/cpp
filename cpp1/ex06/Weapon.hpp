#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <string>

class Weapon
{
private:
    std::string _type;
public:
    std::string getType(void);
    void               setType(std::string newType);
    Weapon();
    Weapon(std::string type);
    ~Weapon();
};

#endif