#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(void)
{
    _type = "cure";
    std::cout << " [Cure] constructor " << std::endl;
}

Cure::Cure(std::string const &type)
{
    _type = type;
    std::cout << " [Cure] string constructor " << std::endl;
}

Cure::Cure(const Cure &srcObject)
{
    _type = srcObject._type;
    std::cout << " [Cure] copy constructor " << std::endl;
}

Cure &Cure::operator=(const Cure &srcObject)
{

    this->_type = srcObject._type;
    std::cout << " [Cure]  operator " << std::endl;
    return (*this);
}

Cure *Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter &si)
{
    std::cout << "[Cure] * heals " << si.getName() << "’s wounds  *" << std::endl;
}

Cure::~Cure(void)
{
    std::cout << " [Cure]  destructor " << std::endl;
}
