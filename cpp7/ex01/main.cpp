#include "iter.hpp"
#include <iostream>
#include <string>

void int_func(int& value)
{
    value += 3;
}

void char_func(char& value)
{
    value += 3;
}

int main()
{
    int tab[] = {3, 6, 9, 23};
    std::cout << "Before: ";
    for (int i = 0; i < 4; i++)
        std::cout << tab[i] << " ";
    std::cout << std::endl;
    ::iter(tab, 4, int_func);
    std::cout << "After: ";
    for (int i = 0; i < 4; i++)
        std::cout << tab[i] << " ";
    std::cout << std::endl;

    char str[] = "salut";
    std::cout << "Before: " << str << std::endl;
    ::iter(str, 5, char_func);
    std::cout << "After: " << str <<std::endl;
}