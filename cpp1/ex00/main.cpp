#include "Pony.hpp"

void    ponyOnTheStack(void)
{
    Pony    myPony;
    myPony.setColor("Blue");
    myPony.setGender("Female");
}

void    ponyOnTheHeap(void)
{
    Pony    *myPony;
    myPony = new Pony();
    myPony->setColor("Green");
    myPony->setGender("Female");
    delete myPony;
}

int main()
{
    ponyOnTheStack();
    ponyOnTheHeap();
    return (0);
}
