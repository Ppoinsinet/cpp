#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
    this->name = name;
    this->title = title;

    std::cout << getName() << ", " << getTitle() << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
    std::cout << getName() << ", " << getTitle() << ", is dead. Consequences will never be the same!" << std::endl;
}

void Sorcerer::introduce(void)
{
    std::cout << "I am " << getName() << ", " << getTitle() << ", and I like ponies!" << std::endl;
}

void Sorcerer::polymorph(Victim const& target) const
{
    target.getPolymorphed();
}

std::ostream& operator<<(std::ostream &out, const Sorcerer& target)
{
    out << "I am " << target.getName() << ", " << target.getTitle() << ", and I like ponies!" << std::endl;
    return (out);
}

std::string Sorcerer::getName(void) const
{
    return (name);
}

std::string Sorcerer::getTitle(void) const
{
    return (title);
}