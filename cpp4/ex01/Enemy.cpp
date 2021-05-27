#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string& newtype)
{
    HP = hp;
    type = newtype;
}

Enemy::~Enemy()
{
}

void Enemy::takeDamage(int nb)
{
    if (nb <= 0)
        return ;
    nb = getHP() - nb;
    if (nb <= 0)
    {
        nb = 0;
        this->~Enemy();
    }
    setHP(nb);
}

int Enemy::getHP(void)
{
    return (HP);
}

std::string Enemy::getType(void)
{
    return (type);
}

void Enemy::setHP(int value)
{
    if (value >= 0)
        HP = value;
}

void Enemy::setType(std::string newType)
{
    type = newType;
}