#include "Cat.hpp"

Cat::Cat() : Animal()
{
    _type = "Cat";
    _brain = new Brain();
    std::cout << BLUE;
    std::cout << " Cat constructor " << std::endl;
    std::cout << RESET;
}

Cat::Cat(std::string name) : Animal()
{
    _type = name;
    _brain = new Brain();
    std::cout << BLUE;
    std::cout << " Cat constructor " << std::endl;
    std::cout << RESET;
}

Cat::Cat(const Cat &srcObject)
{
    std::cout << BLUE;
    std::cout << " cat copy constructor " << std::endl;
    _type = srcObject._type;
    _brain = new Brain();
    *_brain = *(srcObject._brain);
    std::cout << RESET;
}

const Cat &Cat::operator=(const Cat &srcObject)
{
    std::cout << BLUE;
    std::cout << " cat = operator " << std::endl;
    _type = srcObject._type;
    if (this->_brain != nullptr)
    {
        delete _brain;
        _brain = new Brain();
        *_brain = *(srcObject._brain);
    }
    else
    {
        _brain = new Brain();
        *_brain = *(srcObject._brain);
    }
    std::cout << RESET;
    return (*this);
}

std::string Cat::getBrainIdeas(const int i) const
{
    return (_brain->getIdeas(i));
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
    delete _brain;
}
