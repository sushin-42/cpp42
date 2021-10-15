#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    _hitPoint = 100;
    _energyPoint = 100;
    _attackDamage = 30;
    std::cout << GREEN;
    std::cout << " Frag default constructor " << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hitPoint = 100;
    _energyPoint = 100;
    _attackDamage = 30;
    std::cout << GREEN;
    std::cout << " Frag name constructor " << std::endl;
    std::cout << RESET;
}

FragTrap::FragTrap(const FragTrap &srcObject) : ClapTrap(srcObject)
{
    std::cout << GREEN;
    std::cout << " Frag copy constructor " << std::endl;
    std::cout << RESET;
}

FragTrap &FragTrap::operator=(const FragTrap &srcObject)
{
    _name = srcObject._name;
    _hitPoint = srcObject._hitPoint;
    _energyPoint = srcObject._energyPoint;
    _attackDamage = srcObject._attackDamage;
    std::cout << GREEN;
    std::cout << " Frag operator " << std::endl;
    std::cout << RESET;
    return (*this);
}

void FragTrap::attack(std::string const &target)
{
    std::cout << RED;
    std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage! " << std::endl;
    std::cout << RESET;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << BLUE;
    std::cout << _name << " positive high fives " << std::endl;
    std::cout << RESET;
}

FragTrap::~FragTrap()
{
    std::cout << GREEN;
    std::cout << " Frag destructor " << std::endl;
    std::cout << RESET;
}
