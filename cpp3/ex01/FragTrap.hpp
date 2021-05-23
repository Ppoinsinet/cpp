#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>

class FragTrap
{
private:
    int hitPoints;
    int maxHitPoints;
    int energyPoints;
    int level;
    std::string name;
    int meleeAttDamage;
    int rangedAttDamage;
    int armorReduction;
public:
    FragTrap(std::string newName);
    ~FragTrap();
    void rangedAttack(std::string const& target);
    void meleeAttack(std::string const& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void attSlap(std::string const& target);
    void attKick(std::string const& target);
    void attBoule(std::string const& target);
    void attStun(std::string const& target);
    void attFire(std::string const& target);
    
    void vaulthunter_dot_exe(std::string const& target);
};