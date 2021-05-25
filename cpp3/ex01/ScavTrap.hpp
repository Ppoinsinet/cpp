#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>
class ScavTrap
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
    ScavTrap(std::string newName);
    ~ScavTrap();
    void rangedAttack(std::string const& target);
    void meleeAttack(std::string const& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void challengeArm(std::string newcomer);
    void challengePush(std::string newcomer);
    void challengeRace(std::string newcomer);

    void challengeNewcomer(std::string newcomer);
};