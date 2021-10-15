#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(), _gateKeeperMode(false)
{
    _hitPoint = 100;
    _energyPoint = 50;
    _attackDamage = 20;
    std::cout << GREEN;
    std::cout << " Scav default constructor " << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), _gateKeeperMode(false)
{
    _hitPoint = 100;
    _energyPoint = 50;
    _attackDamage = 20;
    std::cout << GREEN;
    std::cout << " Scav name constructor " << std::endl;
    std::cout << RESET;
}

ScavTrap::ScavTrap(const ScavTrap &srcObject) : ClapTrap(srcObject), _gateKeeperMode(srcObject._gateKeeperMode)
{
    std::cout << GREEN;
    std::cout << " Scav copy constructor " << std::endl;
    std::cout << RESET;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &srcObject)
{
    _name = srcObject._name;
    _hitPoint = srcObject._hitPoint;
    _energyPoint = srcObject._energyPoint;
    _attackDamage = srcObject._attackDamage;
    _gateKeeperMode = srcObject._gateKeeperMode;
    std::cout << GREEN;
    std::cout << " Scav operator " << std::endl;
    std::cout << RESET;
    return (*this);
}

void ScavTrap::attack(std::string const &target)
{
    std::cout << RED;
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage! " << std::endl;
    std::cout << RESET;
}

void ScavTrap::guardGate(void)
{
    std::cout << RED;
    if (_hitPoint)
    {
        _gateKeeperMode = true;
        std::cout << "ScavTrap " << _name << " entered gate keeper mode " << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << _name << " really? ScavTrap is died " << std::endl;
    }
    std::cout << RESET;
}

ScavTrap::~ScavTrap()
{
    std::cout << GREEN;
    std::cout << " Scav destructor " << std::endl;
    std::cout << RESET;
}
