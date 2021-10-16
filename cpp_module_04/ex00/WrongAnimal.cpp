#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
    std::cout << BLUE;
    std::cout << " WrongAnimal constructor " << std::endl;
    std::cout << RESET;
}

std::string WrongAnimal::getType(void) const
{
    return (_type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << YELLOW;
    std::cout << " WrongAnimal makesound!!!!!!!!!!!!!!! " << std::endl;
    std::cout << RESET;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << BLUE;
    std::cout << " WrongAnimal destructor " << std::endl;
    std::cout << RESET;
}
