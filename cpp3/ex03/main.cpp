#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap frag("frag");
    ClapTrap clap("clap");
    ScavTrap scav("scav");
    NinjaTrap ninja("ninja");

    std::cout << std::endl;
    ninja.ninjaShoebox(frag);
    ninja.ninjaShoebox(clap);
    ninja.ninjaShoebox(scav);
    ninja.ninjaShoebox(ninja);
    std::cout << std::endl;
    return (0);
}