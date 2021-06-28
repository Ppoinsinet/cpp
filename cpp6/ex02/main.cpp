#include "Base.hpp"
#include <iostream>
#include <string>

void identify_from_pointer(Base * p)
{
    if (dynamic_cast<B*>(p))
    {
        std::cout << "Pointer class is : B" << std::endl;
        return ;
    }
    else if (dynamic_cast<A*>(p))
    {
        std::cout << "Pointer class is : A" << std::endl;
        return ;
    }
    else if (dynamic_cast<C*>(p))
    {
        std::cout << "Pointer class is : C" << std::endl;
        return ;
    }
    std::cout << "Class unknown" << std::endl;
}

void identify_from_reference(Base& p)
{
    try
    {
        dynamic_cast<B&>(p);
        std::cout << "Pointer class is : B" << std::endl;
        return ;
    }
    catch (const std::exception& e)
    {}
    
    try
    {
        dynamic_cast<A&>(p);
        std::cout << "Pointer class is : A" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {}

    try
    {
        dynamic_cast<C&>(p);
        std::cout << "Pointer class is : C" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {}
    std::cout << "Class is unknown" << std::endl;
}

int main()
{
    Base *ptr = new C;
    identify_from_pointer(ptr);
    Base *ptr1 = new A;
    identify_from_pointer(ptr1);
    Base *ptr2 = new A;
    identify_from_pointer(ptr2);
    Base *ptr3 = new Base;
    identify_from_pointer(ptr3);
    Base *ptr4 = new B;
    identify_from_pointer(ptr4);
    Base *ptr5 = new B;
    identify_from_pointer(ptr5);
    delete ptr;
    delete ptr1;
    delete ptr2;
    delete ptr3;
    return (0);
}