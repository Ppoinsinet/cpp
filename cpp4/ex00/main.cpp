#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "PassiveSorcerer.hpp"

int main()
{
    std::cout << "---------------Sorcerer----------------------" << std::endl;
    Sorcerer robert("Robert", "the Magnificient");
    Sorcerer test;
    Sorcerer tmp = Sorcerer(robert);

    test = robert;
    std::cout << test;

    std::cout << "---------------PassiveSorcerer----------------------" << std::endl;
    PassiveSorcerer passive;
    Victim myVictim("bob");
    passive.polymorph(myVictim);

    std::cout << "---------------Victim----------------------" << std::endl;
    Victim jim("jim");
    std::cout << jim;
    jim.getPolymorphed();

    Victim joe = jim;
    std::cout << joe;


    std::cout << std::endl;
    return (0);
}