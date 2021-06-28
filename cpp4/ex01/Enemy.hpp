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
    Enemy(void);
    Enemy(const Enemy &tmp);
    Enemy(int hp, std::string const& type);
    virtual ~Enemy();

    Enemy &operator=(const Enemy &tmp);

    int getHP() const;
    void setHP(int value);

    virtual void takeDamage(int);

    std::string const &getType() const;
    void setType(std::string);
};


#endif