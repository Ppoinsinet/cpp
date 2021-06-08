#include "mutantstack.hpp"

template<typename T>
void MutantStack<T>::pop(void)
{
    ptr.pop_back();
    std::stack<T>::pop();
}

template<typename T>
void MutantStack<T>::push(T const value)
{
    std::stack<T>::push(value);
    T& tmp = this->top();
    ptr.push_back(&tmp);
}

template<typename T>
std::vector<T *> &MutantStack<T>::getTab(void) const
{
    return ptr;
}

template<typename T>
void MutantStack<T>::setTab(std::vector<T *> newTab)
{
    ptr = newTab;
}

template<typename T>
MutantStack<T>::MutantStack()
{}

template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const& old)
: ptr(old.getTab()), std::stack<T>::stack(old)
{}

template<typename T>
MutantStack<T>::~MutantStack()
{}

template<typename T>
MutantStack<T>::iterator::iterator()
: ptr(0), index(0)
{}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
    MutantStack<T>::iterator it;
    it.setTab(&ptr);
    return (it);
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
    MutantStack<T>::iterator it;
    it.setTab(&ptr);
    it.setIndex(this->size());
    return (it);
}

template<typename T>
T& MutantStack<T>::iterator::operator*()
{
    if (!ptr)
        throw std::range_error::exception();
    return (*(ptr->at(index)));
}

template<typename T>
T* MutantStack<T>::iterator::operator&()
{
    if (!ptr)
        throw std::range_error::exception();
    return (ptr->at(index));
}

template<typename T>
int MutantStack<T>::iterator::operator++()
{
    return (++index);
}

template<typename T>
int MutantStack<T>::iterator::operator--()
{
    return (--index);
}

template<typename T>
bool MutantStack<T>::iterator::operator==(MutantStack<T>::iterator const& b) const
{
    if (ptr == b.getTab() && ptr && index == b.getIndex())
        return true;
    return false;    
}

template<typename T>
bool MutantStack<T>::iterator::operator!=(MutantStack<T>::iterator const& b) const
{
    if (ptr == b.getTab() && ptr && index == b.getIndex())
        return false;
    return true;    
}

template<typename T>
std::vector<T*> *MutantStack<T>::iterator::getTab(void) const
{
    return ptr;
}

template<typename T>
unsigned int MutantStack<T>::iterator::getIndex(void) const
{
    return index;
}

template<typename T>
void MutantStack<T>::iterator::setTab(std::vector<T*> *value)
{
    ptr = value;
}

template<typename T>
void MutantStack<T>::iterator::setIndex(int value)
{
    index = value;
}