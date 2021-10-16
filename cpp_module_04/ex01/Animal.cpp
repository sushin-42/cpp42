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

const Animal &Animal::operator=(const Animal &srcObject)
{
    std::cout << BLUE;
    std::cout << " dog = operator " << std::endl;
    // if (this->_brain != nullptr)
    // {
    // }
    // else
    // {
    // }
    // _value = srcObject.getRawBits();
    (void)srcObject;
    std::cout << RESET;
    return (*this);
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
