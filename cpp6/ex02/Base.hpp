#ifndef BASE_HPP
#define BASE_HPP
#include <time.h>
#include <random>

class Base
{
public:
    Base *generate(void);
    virtual ~Base();
};


#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#endif