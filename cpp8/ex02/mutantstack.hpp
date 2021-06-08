#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <vector>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
private:
    std::vector<T *> ptr;
public:
    class iterator
    {
    private:
        std::vector<T*> *ptr;
        unsigned int index;
    public:
        std::vector<T*> *getTab(void) const;
        void setTab(std::vector<T*> *value);
        void setIndex(int value);
        unsigned int getIndex(void) const;
        iterator();
        T& operator*();
        T* operator&();
        int operator++();
        int operator--();
        bool operator==(MutantStack<T>::iterator const& b) const;
        bool operator!=(MutantStack<T>::iterator const& b) const;

    };
    
    std::stack<T> &getStack(void) const;
    std::vector<T *> &getTab(void) const;

    void setStack(std::stack<T> newStack);
    void setTab(std::vector<T *> newTab);

    void pop(void);
    void push(T const value);

    MutantStack();
    MutantStack(MutantStack<T> const& old);
    ~MutantStack();
    iterator begin(void);
    iterator end(void);
};

#include "mutantstack.cpp"

#endif