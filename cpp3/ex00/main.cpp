 #include "FragTrap.hpp"

int main()
{
    srand(time(NULL));

    FragTrap test("gentil");
    test.vaulthunter_dot_exe("mechant");
    test.vaulthunter_dot_exe("mechant");
    test.vaulthunter_dot_exe("mechant");
    test.vaulthunter_dot_exe("mechant");
    test.takeDamage(23);
    test.takeDamage(23);
    test.takeDamage(23);
    test.takeDamage(23);
    test.takeDamage(23);
    test.takeDamage(223);
    test.takeDamage(23);
    test.takeDamage(23);
    test.beRepaired(49);
    test.beRepaired(57);
    test.beRepaired(23);
    test.vaulthunter_dot_exe("mechant");
    test.vaulthunter_dot_exe("mechant");
    test.vaulthunter_dot_exe("mechant");

    
    return (0);
}