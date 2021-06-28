#include "Peon.hpp"

Peon::Peon(void) : Victim("myPeon")
{ std::cout << "Zog zog." << std::endl; }

Peon::Peon(const Peon &tmp) : Victim(tmp.name)
{ std::cout << "Zog zog." << std::endl; }

Peon::Peon(std::string name) : Victim(name)
{ std::cout << "Zog zog." << std::endl; }

Peon::~Peon(void)
{ std::cout << "Bleuark..." << std::endl; }

Peon &Peon::operator=(const Peon &tmp)
{ name = tmp.name; return *this; }

void Peon::getPolymorphed(void) const
{ std::cout << getName() << " has been turned into a pink pony!" << std::endl; }