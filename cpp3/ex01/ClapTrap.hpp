#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class ClapTrap: public ScavTrap, public FragTrap
{
private:
    /* data */
public:
    ClapTrap(/* args */);
    ~ClapTrap();
};