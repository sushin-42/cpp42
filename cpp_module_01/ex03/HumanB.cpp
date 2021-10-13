#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name){}

HumanB::HumanB(){}

HumanB::~HumanB(){}

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with his " << (*_weapon).getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
