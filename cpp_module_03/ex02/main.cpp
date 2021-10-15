#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap Kim("Kim");
    ScavTrap Shin("Shin");
    FragTrap Park("Park");

    std::cout << std::endl;

    Kim.attack("Shin");
    Shin.takeDamage(Kim.getAttackDamage());
    std::cout << std::endl;

    Shin.attack("Kim");
    Kim.takeDamage(Shin.getAttackDamage());
    std::cout << std::endl;

    Park.attack("Shin");
    Shin.takeDamage(Park.getAttackDamage());
    std::cout << std::endl;

    Kim.beRepaired(25);
    Shin.beRepaired(25);
    Park.beRepaired(25);
    std::cout << std::endl;

    Shin.guardGate();
    Park.highFivesGuys();
    std::cout << std::endl;
    return (0);
}