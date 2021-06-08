#include "Array.hpp"
#include <iostream>
#include <string>

int main()
{
    Array<int> test(4);
    test[0] = 2;
    test[1] = 3;
    test[2] = 9;
    test[3] = 102;
    std::cout << test[0] << " " << test[1] << " " << test[2] << " " << test[3];
}