#include "FragTrap.hpp"

class ScavTrap: public FragTrap
{
private:
    
public:
    ScavTrap();
    ~ScavTrap();
    void vaulthunter_dot_exe(std::string const& target);
};