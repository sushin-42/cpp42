#include "Zombie.hpp"

int	main(void)
{

	Zombie *zombie[2];

	zombie[0] = newZombie("zombie_1");
	zombie[1] = newZombie("zombie_2");

	randomChump("zombie_3");

	zombie[0]->announce();
	zombie[1]->announce();

	for(int i = 0; i < 2; i++)
		delete zombie[i];

	return (0);
}
