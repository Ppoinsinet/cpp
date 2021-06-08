#include "program.hpp"
#include <random>
#include <time.h>
#include <iostream>
#include <string>

void *serialize(void)
{
    Data *ptr = new Data;
    ptr->n = rand();
    ptr->s1 = "Salut123";
    ptr->s2 = "Coucou45";
    ptr->n = static_cast<int>(rand());

    return static_cast<void *>(ptr);
}

Data *deserialize(void *raw)
{
    return static_cast<Data *>(raw);
}

int main()
{
    srand(time(NULL));
    Data *ptr = deserialize(serialize());
    std::cout << "n = " << ptr->n << std::endl;
    std::cout << "s1 = " << ptr->s1 << std::endl;
    std::cout << "s2 = " << ptr->s2 << std::endl;
    std::cout << "wesh : " << sizeof(Data) << std::endl;
    std::cout << "wesh1 : " << sizeof(ptr->n) << std::endl;
    std::cout << "wesh2 : " << sizeof(ptr->s1) << std::endl;
    std::cout << "wesh3 : " << sizeof(ptr->s2) << std::endl;


}