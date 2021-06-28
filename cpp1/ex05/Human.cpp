#include "Human.hpp"

std::string Human::identify(void) const
{ return (_brain.identify()); }

const Brain       &Human::getBrain(void) const
{ return (_brain); }

Human::Human(void)
{}

Human::~Human(void)
{}