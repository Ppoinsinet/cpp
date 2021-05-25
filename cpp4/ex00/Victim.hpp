#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <iostream>

class Victim
{
private:
    std::string name;
public:
    Victim(std::string &name);
    ~Victim();

    void introduce(void);
    void getPolymorphed() const;
};

#endif