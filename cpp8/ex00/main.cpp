#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
    std::vector<int> tab;

    tab.push_back(2);
    tab.push_back(8);
    tab.push_back(3);
    tab.push_back(4);

    if (easyfind(tab, 3) != tab.end())
        std::cout << "3 was found\n";
    else
        std::cout << "3 was not found\n";
    return 0;
}