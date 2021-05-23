#include "Pony.hpp"

void    ponyOnTheStack(void)
{
    Pony    myPony;
    myPony.changesColor("Blue");
    myPony.changesGender("Female");
}

void    ponyOnTheHeap(void)
{
    Pony    *myPony;
    myPony = new Pony();
    myPony->changesColor("Green");
    myPony->changesGender("Female");
    delete myPony;
}

int main()
{
    ponyOnTheStack();
    ponyOnTheHeap();
    return (0);
}