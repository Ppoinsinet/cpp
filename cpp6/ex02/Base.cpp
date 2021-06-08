#include "Base.hpp"

Base *Base::generate(void)
{
    srand(time(0));
    int i = rand() % 3;
    if (!i)
        return reinterpret_cast<Base*>(new A);
    else if (i == 1)
        return reinterpret_cast<Base*>(new B);
    return reinterpret_cast<Base*>(new C);
}

Base::~Base()
{
}