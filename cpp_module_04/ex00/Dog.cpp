#include "Dog.hpp"

Dog::Dog() : Animal()
{
    _type = "Dog";
    std::cout << BLUE;
    std::cout << " Dog constructor " << std::endl;
    std::cout << RESET;
}

void Dog::makeSound(void) const
{
    std::cout << YELLOW;
    std::cout << " Dog makesound!!!!!!!!!!!!!!! " << std::endl;
    std::cout << RESET;
}

Dog::~Dog()
{
    std::cout << BLUE;
    std::cout << " Dog destructor " << std::endl;
    std::cout << RESET;
}
