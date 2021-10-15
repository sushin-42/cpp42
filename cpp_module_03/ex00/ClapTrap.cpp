#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    _name = "default";
    _hitPoint = 10;
    _energyPoint = 10;
    _attackDamage = 0;
    std::cout << GREEN;
    std::cout << " default constructor " << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    _name = name;
    _hitPoint = 10;
    _energyPoint = 10;
    _attackDamage = 0;
    std::cout << GREEN;
    std::cout << " name constructor " << std::endl;
    std::cout << RESET;
}

ClapTrap::ClapTrap(const ClapTrap &srcObject)
{
    _name = srcObject._name;
    _hitPoint = srcObject._hitPoint;
    _energyPoint = srcObject._energyPoint;
    _attackDamage = srcObject._attackDamage;
    std::cout << GREEN;
    std::cout << " copy constructor " << std::endl;
    std::cout << RESET;
}

ClapTrap::~ClapTrap()
{
    std::cout << GREEN;
    std::cout << " destructor " << std::endl;
    std::cout << RESET;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &srcObject)
{
    _name = srcObject._name;
    _hitPoint = srcObject._hitPoint;
    _energyPoint = srcObject._energyPoint;
    _attackDamage = srcObject._attackDamage;
    std::cout << GREEN;
    std::cout << " operator " << std::endl;
    std::cout << RESET;
    return (*this);
}

void ClapTrap::attack(std::string const &target)
{
    std::cout << RED;
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage! " << std::endl;
    std::cout << RESET;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << PURPLE;
    if (_energyPoint > amount)
    {
        std::cout << _name << " before HP is " << _energyPoint << std::endl;
        std::cout << _name << " take damage " << amount << std::endl;
        _energyPoint -= amount;
        std::cout << _name << " after  HP is " << _energyPoint << std::endl;
    }
    else
    {
        std::cout << _name << " before HP is " << _energyPoint << std::endl;
        std::cout << _name << " take damage " << amount << std::endl;
        _energyPoint = 0;
        std::cout << _name << " is fainted " << _energyPoint << std::endl;
    }
    std::cout << RESET;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << CYAN;
    std::cout << _name << " before HP is " << _energyPoint << std::endl;
    std::cout << _name << " be repaired " << amount << std::endl;
    _energyPoint += amount;
    std::cout << _name << " after  HP is " << _energyPoint << std::endl;
    std::cout << RESET;
}
unsigned int ClapTrap::getAttackDamage() const
{
    return (_attackDamage);
}
