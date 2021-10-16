#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    _type = "WrongCat";
    std::cout << BLUE;
    std::cout << " WrongCat constructor " << std::endl;
    std::cout << RESET;
}

void WrongCat::makeSound(void) const
{
    std::cout << YELLOW;
    std::cout << " WrongCat makesound!!!!!!!!!!!!!!! " << std::endl;
    std::cout << RESET;
}

WrongCat::~WrongCat()
{
    std::cout << BLUE;
    std::cout << " WrongCat destructor " << std::endl;
    std::cout << RESET;
}
