#include "ScavTrap.hpp"

int main()
{
    srand(time(NULL));
    
    ScavTrap myScav("gentilScav");

    myScav.challengeNewcomer("mechant");
    myScav.challengeNewcomer("mechant");
    myScav.challengeNewcomer("mechant");
    myScav.challengeNewcomer("mechant");
    myScav.takeDamage(23);
    myScav.takeDamage(43);
    myScav.takeDamage(14);
    myScav.takeDamage(5);
    myScav.takeDamage(39);
    myScav.takeDamage(139);
    myScav.beRepaired(40);
    myScav.beRepaired(12);
    myScav.beRepaired(23);
    myScav.beRepaired(65);

    myScav.challengeArm("mechant");
    myScav.challengeRace("mechant");
    myScav.challengePush("mechant");

    return (0);
}