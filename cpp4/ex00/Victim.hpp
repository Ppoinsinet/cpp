#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <iostream>

class Victim
{
private:
    std::string name;
public:
    Victim(std::string name);
    ~Victim();

    std::string getName(void) const;
    void setName(std::string name);

    void introduce(void);
    virtual void getPolymorphed(void) const;
};

std::ostream& operator<<(std::ostream& out, Victim& target);

#endif