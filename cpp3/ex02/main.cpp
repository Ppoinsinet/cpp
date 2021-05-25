#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap myScav("gentilScav");
    FragTrap myFrag("gentilFrag");

    myScav.challengeNewcomer("mechant");
    myScav.challengeNewcomer("mechant");
    myScav.challengeNewcomer("mechant");
    myScav.challengeNewcomer("mechant");

    return (0);
}