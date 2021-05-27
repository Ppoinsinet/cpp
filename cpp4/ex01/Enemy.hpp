#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>
#include <string>

class Enemy
{
protected:
    int HP;
    std::string type;
public:
    Enemy(int hp, std::string const& type);
    virtual ~Enemy();
    std::string getType() const;
    int getHP() const;

    virtual void takeDamage(int);

    int getHP(void);
    void setHP(int value);
    std::string getType(void);
    void setType(std::string);
};


#endif