#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << BLUE;
    std::cout << " Animal constructor " << std::endl;
    std::cout << RESET;
}

std::string Animal::getType(void) const
{
    return (_type);
}

void Animal::makeSound(void) const
{
    std::cout << YELLOW;
    std::cout << " Animal makesound!!!!!!!!!!!!!!! " << std::endl;
    std::cout << RESET;
}

Animal::~Animal()
{
    std::cout << BLUE;
    std::cout << " Animal destructor " << std::endl;
    std::cout << RESET;
}
