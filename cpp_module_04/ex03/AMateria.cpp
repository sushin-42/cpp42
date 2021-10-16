#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(void)
{
    _type = "default";
    std::cout << " [AMateria] constructor " << std::endl;
}

AMateria::AMateria(std::string const &type)
{
    _type = type;
    std::cout << " [AMateria] string constructor " << std::endl;
}

AMateria::AMateria(const AMateria &srcObject)
{
    _type = srcObject._type;
    std::cout << " [AMateria] copy constructor " << std::endl;
}

AMateria &AMateria::operator=(const AMateria &srcObject)
{

    this->_type = srcObject._type;
    std::cout << " [AMateria]  operator " << std::endl;
    return (*this);
}

std::string const &AMateria::getType() const // Returns the materia type
{
    return (_type);
}

void AMateria::use(ICharacter &si)
{
    std::cout << " [AMateria]  use donothing  " << si.getName() << std::endl;
}

AMateria::~AMateria(void)
{
    std::cout << " [AMateria]  destructor " << std::endl;
}
