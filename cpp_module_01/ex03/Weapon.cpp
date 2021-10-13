#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type){}

Weapon::Weapon(){}

Weapon::~Weapon(){}

void				Weapon::setType(std::string type)
{
	this->_type = type;
}

const std::string	&Weapon::getType(void)
{
	return (_type);
}