#include "PassiveSorcerer.hpp"

PassiveSorcerer::PassiveSorcerer(const PassiveSorcerer &tmp)
: Sorcerer(tmp.getName(), tmp.getTitle())
{ std::cout << "Passive Sorcerer " << tmp.getName() << ", " << tmp.getTitle() << ", has appeared !" << std::endl; }

PassiveSorcerer::PassiveSorcerer(std::string newName, std::string newTitle)
: Sorcerer(newName, newTitle)
{ std::cout << "Passive Sorcerer " << newName << ", " << newTitle << ", has appeared !" << std::endl; }

PassiveSorcerer::~PassiveSorcerer()
{ std::cout << "Passive Sorcerer " << getName() << ", " << getTitle() << ", has disappeared !" << std::endl; }

void PassiveSorcerer::polymorph(Victim const& target) const
{ std::cout << getName() << " doesn't want to polymorph " << target.getName() << std::endl; }