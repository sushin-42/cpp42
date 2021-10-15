#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

#define BLUE "\e[34m"
#define GREEN "\e[32m"
#define CYAN "\e[36m"
#define RED "\e[31m"
#define PURPLE "\e[35m"
#define RESET "\e[0m"

class ClapTrap
{
private:
    std::string _name;
    unsigned int _hitPoint;
    unsigned int _energyPoint;
    unsigned int _attackDamage;

public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &srcObject);
    ~ClapTrap(void);

    ClapTrap &operator=(const ClapTrap &srcObject);

    unsigned int getAttackDamage() const;
    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif