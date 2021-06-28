#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <iostream>

class Victim
{
protected:
    std::string name;
public:
    Victim(void);
    Victim(const Victim &tmp);
    Victim(std::string name);
    ~Victim();

    Victim &operator=(const Victim &tmp);

    std::string getName(void) const;
    void setName(std::string name);

    void introduce(void);
    virtual void getPolymorphed(void) const;
};

std::ostream& operator<<(std::ostream& out, Victim& target);

#endif