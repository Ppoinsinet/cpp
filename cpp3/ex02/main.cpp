#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()  
{
    srand(time(NULL));
    ScavTrap myScav("myScav");
    myScav.takeDamage(21);
    myScav.takeDamage(52);
    myScav.takeDamage(13);
    myScav.takeDamage(2);
    myScav.takeDamage(16);

    myScav.beRepaired(99);
    myScav.challengeArm("badGuy");
    myScav.challengeRace("badGuy");

    std::cout << "FRAGTRAP ------------------" << std::endl;
    FragTrap myFrag("myFrag");
    myFrag.attBoule("veryBadGuy");
    myFrag.attSlap("veryBadGuy");
    myFrag.attFire("veryBadGuy");
    myFrag.beRepaired(15);
    myFrag.takeDamage(89);
    myFrag.takeDamage(23);
    myFrag.beRepaired(59);

    std::cout << std::endl;
    myScav.challengeNewcomer("newcomer");
    myScav.challengeNewcomer("newcomer");
    myScav.challengeNewcomer("newcomer");

    std::cout << std::endl;
    myFrag.vaulthunter_dot_exe("newcomer");
    myFrag.vaulthunter_dot_exe("newcomer");
    myFrag.vaulthunter_dot_exe("newcomer");
    myFrag.vaulthunter_dot_exe("newcomer");
    myFrag.vaulthunter_dot_exe("newcomer");

    std::cout << std::endl;

    return (0);
}