#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#define S_HP 100
#define S_EP 50
#define S_AD 20

class ScavTrap : virtual public ClapTrap
{
private:
    bool _gateKeeperMode;

public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &srcObject);
    ~ScavTrap(void);

    ScavTrap &operator=(const ScavTrap &srcObject);
    void attack(std::string const &target);
    void guardGate(void);
};

#endif