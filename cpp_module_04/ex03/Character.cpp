#include "Character.hpp"

Character::Character(void)
{
    _name = "";
    for (int i = 0; i < 4; i++)
        _inven[i] = nullptr;
    std::cout << " [Character] constructor " << std::endl;
}

Character::Character(const std::string &name)
{
    _name = name;
    for (int i = 0; i < 4; i++)
        _inven[i] = nullptr;
    std::cout << " [Character] string constructor " << std::endl;
}

Character::Character(const Character &srcObject)
{
    _name = srcObject.getName();
    for (int i = 0; i < 4; i++)
    {
        const AMateria *temp = srcObject.getMateria(i);
        if (temp)
            _inven[i] = temp->clone();
        else
            _inven[i] = nullptr;
    }
    std::cout << " [Character] copy constructor " << std::endl;
}

Character &Character::operator=(const Character &srcObject)
{
    if (this != &srcObject)
    {
        _name = srcObject.getName();
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
    std::cout << " [Character]  operator " << std::endl;
    return (*this);
}

std::string const &Character::getName(void) const
{
    return (_name);
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inven[i] == nullptr)
        {
            _inven[i] = m;
            break;
        }
        else
            continue;
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && _inven[idx])
        _inven[idx] = NULL;
}

void Character::use(int idx, ICharacter &si)
{
    if (idx >= 0 && idx < 4 && _inven[idx])
        _inven[idx]->use(si);
}

const AMateria *Character::getMateria(int i) const
{
    return (_inven[i]);
}

Character::~Character()
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