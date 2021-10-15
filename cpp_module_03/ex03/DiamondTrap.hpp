#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
    std::string _name;

public:
    DiamondTrap(void);
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &srcObject);
    ~DiamondTrap(void);

    DiamondTrap &operator=(const DiamondTrap &srcObject);
    using ScavTrap::attack;
    void whoAmI();
};

#endif

// Name(Parameter of constructor)
// Claptrap::Name(Parameter of constructor + "_clap_name")
// _hitPoint(Fragtrap)
// _energyPoint(Scavtrap)
// _attackDamage(Fragtrap)
// attack(Scavtrap)