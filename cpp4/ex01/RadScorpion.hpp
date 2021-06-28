#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
private:
    /* data */
public:
    RadScorpion(/* args */);
    RadScorpion(const RadScorpion &tmp);
    ~RadScorpion();

    RadScorpion &operator=(const RadScorpion &tmp);
};


#endif