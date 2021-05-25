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
    Sorcerer(std::string& name, std::string& title);
    ~Sorcerer();

    std::string getName(void);
    std::string getTitle(void);
    void setName(std::string newName);
    void setTitle(std::string newTitle);

    void introduce(void);
    void polymorph(Victim const&) const;
    void operator<<(std::ostream &out);
};


#endif