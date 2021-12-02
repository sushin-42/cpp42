#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(void)
{
    _type = "ice";
    std::cout << " [Ice] constructor " << std::endl;
}

Ice::Ice(std::string const &type)
{
    _type = type;
    std::cout << " [Ice] string constructor " << std::endl;
}

Ice::Ice(const Ice &srcObject)
{
    _type = srcObject._type;
    std::cout << " [Ice] copy constructor " << std::endl;
}

Ice &Ice::operator=(const Ice &srcObject)
{

    this->_type = srcObject._type;
    std::cout << " [Ice]  operator " << std::endl;
    return (*this);
}

AMateria *Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter &target)
{
    std::cout << "[Ice] * shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice(void)
{
    std::cout << " [Ice]  destructor " << std::endl;
}
