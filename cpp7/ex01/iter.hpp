#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
inline void iter(T tab[], unsigned int size, void (*func)(T& value))
{
    for (int i = 0; i < size; i++)
    {
        (*func)(tab[i]);
    }
}

#endif