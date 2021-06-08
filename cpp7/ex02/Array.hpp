#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

class OutOfBounds : public std::exception
{
    virtual const char *what() const throw()
    { return "Accessing out-of-bounds value"; }
};

template<typename T>
class Array
{
private:
    T *tab;
    int tab_size;
public:
    Array() : tab(0), tab_size(0)
    {}

    Array(unsigned int n) : tab_size(n)
    {
        tab = new T[n];
        for (int i = 0; i < n; i++)
            tab[i] = 0;
    }

    Array(const Array &obj) : tab_size(obj.size)
    {
        tab = new T[tab_size];
        for (int i = 0; i < tab_size; i++)
            tab[i] = obj.tab[i];
    }

    T& operator[](unsigned int n)
    {
        if (n >= tab_size)
            throw OutOfBounds();
        return tab[n];
    }

    unsigned int size() const
    {
        return tab_size;
    }
    ~Array(){}
};


#endif 