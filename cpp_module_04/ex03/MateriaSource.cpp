#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
        _inven[i] = nullptr;
    std::cout << " [MateriaSource] constructor " << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &srcObject)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inven[i])
        {
            delete _inven[i];
            _inven[i] = NULL;
        }
        const AMateria *temp = srcObject.getMateria(i);
        if (temp)
            _inven[i] = temp->clone();
    }
    std::cout << " [MateriaSource] copy constructor " << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &srcObject)
{
    if (this != &srcObject)
    {
        for (int i = 0; i < 4; i++)
        {
            if (_inven[i])
            {
                delete _inven[i];
                _inven[i] = NULL;
            }
            const AMateria *temp = srcObject.getMateria(i);
            if (temp)
                _inven[i] = temp->clone();
        }
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
    if (materia == nullptr)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (_inven[i] == nullptr)
        {
            _inven[i] = materia;
            std::cout << " learn " << materia->getType() << std::endl;
            return;
        }
        else if ((_inven[i] != nullptr) && (_inven[i]->getType() == materia->getType()))
        {
            std::cout << " exist " << materia->getType() << std::endl;
            return;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inven[i] && (_inven[i]->getType() == type))
        {
            std::cout << "success createmateria : " << type << std::endl;
            return (_inven[i]->clone());
        }
    }
    std::cout << "fail createmateria : " << type << std::endl;
    return (nullptr);
}

const AMateria *MateriaSource::getMateria(int i) const
{
    return (_inven[i]);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (_inven[i])
        {
            delete _inven[i];
            _inven[i] = NULL;
        }
    }
}