#include "SuperTrap.hpp"

int main()
{
    srand(time(NULL));
    SuperTrap test("coucou");
    std::cout << std::endl;

    test.vaulthunter_dot_exe("badGuy");
    test.vaulthunter_dot_exe("badGuy");
    test.vaulthunter_dot_exe("badGuy");
    test.vaulthunter_dot_exe("badGuy");
    test.vaulthunter_dot_exe("badGuy");

    test.meleeAttack("badGuy");
    test.rangedAttack("badGuy");

    std::cout << std::endl;
    ClapTrap clap("clap");
    FragTrap frag("frag");
    NinjaTrap ninja("ninja");
    std::cout << std::endl;

    test.ninjaShoebox(clap);
    test.ninjaShoebox(frag);
    test.ninjaShoebox(ninja);
    std::cout << std::endl;

    test.takeDamage(89);
    test.beRepaired(7);
    test.beRepaired(141);

    std::cout << std::endl;
    return (0);
}