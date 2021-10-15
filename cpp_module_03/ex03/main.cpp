#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    ClapTrap Kim("Kim");
    ScavTrap Shin("Shin");
    FragTrap Park("Park");
    DiamondTrap Kang("Kang");
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

    Kang.attack("Park");
    Park.takeDamage(Kang.getAttackDamage());
    std::cout << std::endl;

    Kim.beRepaired(25);
    Shin.beRepaired(25);
    Park.beRepaired(25);
    Kang.beRepaired(25);
    std::cout << std::endl;

    Shin.guardGate();
    Park.highFivesGuys();
    Kang.guardGate();
    Kang.highFivesGuys();
    std::cout << std::endl;
    Kang.whoAmI();
    std::cout << std::endl;
    return (0);
}