#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "<" << name << ">" <<  " made " << std::endl;
}
Zombie::Zombie(void)
{
}
Zombie::~Zombie()
{
	std::cout << "<" << Zombie::getName() << ">" <<  " head is gone " << std::endl;
}

std::string	Zombie::getName(void)
{
	return (this->_name);
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::announce(void)
{
	std::cout << "<" << Zombie::getName() << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}
