#include "Dog.hpp"

Dog::Dog() : Animal()
{
    _type = "Dog";
    _brain = new Brain();
    std::cout << BLUE;
    std::cout << " Dog constructor " << std::endl;
    std::cout << RESET;
}

Dog::Dog(std::string name) : Animal()
{
    _type = name;
    _brain = new Brain();
    std::cout << BLUE;
    std::cout << " Dog constructor " << std::endl;
    std::cout << RESET;
}

Dog::Dog(const Dog &srcObject)
{
    std::cout << BLUE;
    std::cout << " dog copy constructor " << std::endl;
    _type = srcObject._type;
    _brain = new Brain();
    *_brain = *(srcObject._brain);
    std::cout << RESET;
}

const Dog &Dog::operator=(const Dog &srcObject)
{
    std::cout << BLUE;
    std::cout << " dog = operator " << std::endl;
    (void)srcObject;
    std::cout << RESET;
    return (*this);
}

std::string Dog::getBrainIdeas(const int i) const
{
    return (_brain->getIdeas(i));
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
    delete _brain;
}
