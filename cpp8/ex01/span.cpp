#include "span.hpp"
#include <iostream>

span::span(unsigned int size)
:size(0), max_size(size)
{}

span::~span()
{}

void span::addNumber(int value)
{
    if (size >= max_size)
        throw span::TooMany();
    tab.push_back(value);
    size++;
}

int span::shortestSpan(void)
{
    if (size <= 1)
        throw span::TooSmall();
    int tmp = tab[0];
    for (int i : tab)
    {
        if (i < tmp)
            tmp = i;
    }
    return (tmp);
}

int span::longestSpan(void)
{
    if (size <= 1)
        throw span::TooSmall();
    int tmp = tab[0];
    for (int i : tab)
    {
        if (i > tmp)
            tmp = i;
    }
    return (tmp);
}