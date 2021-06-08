#include "span.hpp"
#include <iostream>

int main()
{
    span test = span(5);
    std::vector<int> tab;
    tab.push_back(0);
    tab.push_back(9);
    tab.push_back(5);
    tab.push_back(1234);
    tab.push_back(1);


    test.addNumber(tab.begin(), tab.end());
    std::cout << test.longestSpan() << std::endl;
    std::cout << test.shortestSpan() << std::endl;

    return (0);
}