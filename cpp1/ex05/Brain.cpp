#include "Brain.hpp"
#include <string>
#include <sstream>
#include <iostream>

std::string  Brain::identify(void) const
{
    std::stringstream flux;
    flux << std::hex << this;
    return flux.str();
}

int    Brain::getAge(void) const
{ return (_age); }

Brain::Brain(void)
: _age(0)
{}

Brain::~Brain(void)
{}