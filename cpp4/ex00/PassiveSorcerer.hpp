#ifndef PASSIVESORCERER_HPP
#define PASSIVESORCERER_HPP

#include "Sorcerer.hpp"

class PassiveSorcerer : public Sorcerer
{
public:
    PassiveSorcerer(const PassiveSorcerer &tmp);
    PassiveSorcerer(std::string name = "Gandalf", std::string title = "the Good");
    ~PassiveSorcerer();

    PassiveSorcerer &operator=(const PassiveSorcerer &tmp);

    void polymorph(Victim const& target) const;
};


#endif