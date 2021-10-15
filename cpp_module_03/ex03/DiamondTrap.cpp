#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), FragTrap(), ScavTrap()
{
    _name = "default";
    ClapTrap::_name += "_clap_name";
    _hitPoint = F_HP;
    _energyPoint = S_EP;
    _attackDamage = F_AD;
    std::cout << GREEN;
    std::cout << " Diamond default constructor " << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
    _hitPoint = F_HP;
    _energyPoint = S_EP;
    _attackDamage = F_AD;
    std::cout << GREEN;
    std::cout << " Diamond name constructor " << std::endl;
    std::cout << RESET;
}

DiamondTrap::DiamondTrap(const DiamondTrap &srcObject) : ClapTrap(srcObject), FragTrap(srcObject), ScavTrap(srcObject), _name(srcObject._name)
{
    std::cout << GREEN;
    std::cout << " Diamond copy constructor " << std::endl;
    std::cout << RESET;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &srcObject)
{
    _name = srcObject._name;
    ClapTrap::_name = srcObject.ClapTrap::_name;
    _hitPoint = srcObject._hitPoint;
    _energyPoint = srcObject._energyPoint;
    _attackDamage = srcObject._attackDamage;
    std::cout << GREEN;
    std::cout << " Diamond operator " << std::endl;
    std::cout << RESET;
    return (*this);
}

void DiamondTrap::whoAmI()
{
    std::cout << "[whoAmi] "
              << "DiamontTrap name is " << _name << ", ClapTrap name is " << ClapTrap::_name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << GREEN;
    std::cout << " Diamond destructor " << std::endl;
    std::cout << RESET;
}
