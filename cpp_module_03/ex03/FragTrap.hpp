#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#define F_HP 100
#define F_EP 100
#define F_AD 30

class FragTrap : virtual public ClapTrap
{
private:
public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(const FragTrap &srcObject);
    ~FragTrap(void);

    FragTrap &operator=(const FragTrap &srcObject);
    void attack(std::string const &target);
    void highFivesGuys(void);
};

#endif