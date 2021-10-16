#include "Cat.hpp"

Cat::Cat() : Animal()
{
    _type = "Cat";
    std::cout << BLUE;
    std::cout << " Cat constructor " << std::endl;
    std::cout << RESET;
}

void Cat::makeSound(void) const
{
    std::cout << YELLOW;
    std::cout << " Cat makesound!!!!!!!!!!!!!!! " << std::endl;
    std::cout << RESET;
}

Cat::~Cat()
{
    std::cout << BLUE;
    std::cout << " Cat destructor " << std::endl;
    std::cout << RESET;
}
