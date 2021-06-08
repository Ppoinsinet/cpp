#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>

template<typename T>
typename T::const_iterator easyfind(T const& container, int comp)
{
    typename T::const_iterator it;

    it = std::find(container.begin(), container.end(), comp);
    return it;
}

#endif