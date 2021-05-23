#include "Brain.hpp"
#include <string>
#include <sstream>
#include <iostream>

std::string  Brain::identify(void)
{
    std::string tmp = "";
    std::stringstream flux;
    flux << std::hex << this;
    tmp += flux.str();
    return (tmp);
}

int    Brain::getAge(void)
{
    return (age);
}

Brain::Brain(void)
{
    age = 0;
}

Brain::~Brain(void)
{
}