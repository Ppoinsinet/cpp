#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <string>
#include <iostream>

#include "Victim.hpp"

class Sorcerer
{
private:
    std::string name;
    std::string title;
public:
    Sorcerer(const Sorcerer &tmp);
    Sorcerer(std::string name = "Sorcerer", std::string title = "the GOAT");
    ~Sorcerer();

    Sorcerer &operator=(const Sorcerer &tmp);

    std::string getName(void) const;
    std::string getTitle(void)const;
    void setName(std::string newName);
    void setTitle(std::string newTitle);

    void introduce(void);
    void polymorph(Victim const& target) const;
};

std::ostream& operator<<(std::ostream &out, const Sorcerer& target);


#endif