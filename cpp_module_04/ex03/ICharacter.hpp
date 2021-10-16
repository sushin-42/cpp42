#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "AMateria.hpp"
#include <string>
#include <iomanip>
#include <iostream>

class ICharacter
{
public:
    virtual std::string const &getName() const = 0;
    virtual void equip(AMateria *m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter &si) = 0;
    virtual ~ICharacter() {}
};

#endif