#include "Enemy.hpp"

Enemy::Enemy(void)
: HP(100), type("")
{}

Enemy::Enemy(const Enemy &tmp)
: HP(tmp.HP), type(tmp.type)
{}

Enemy::Enemy(int hp, const std::string& newtype)
: HP(hp), type(newtype)
{}

Enemy::~Enemy()
{}

Enemy &Enemy::operator=(const Enemy &tmp)
{
    HP = tmp.HP;
    type = tmp.type;
    return *this;
}

void Enemy::takeDamage(int nb)
{
    if (nb <= 0)
        return ;
    nb = getHP() - nb;
    if (nb <= 0)
    {
        this->~Enemy();
        HP = 0;
        return ;
    }
    setHP(nb);
}

int Enemy::getHP(void) const
{ return (HP); }

std::string const &Enemy::getType(void) const
{ return (type); }

void Enemy::setHP(int value)
{
    if (value >= 0)
        HP = value;
}

void Enemy::setType(std::string newType)
{ type = newType; }