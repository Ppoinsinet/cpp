#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include <string>

#include "Victim.hpp"

class Peon : public Victim
{
public:
    Peon(void);
    Peon(const Peon &tmp);
    Peon(std::string name);
    ~Peon();

    Peon &operator=(const Peon &tmp);

    void getPolymorphed(void) const;
};



#endif