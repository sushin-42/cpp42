#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter
{
private:
    std::string _name;
    AMateria *_inven[4];

public:
    Character(void);
    Character(const std::string &name);
    Character(const Character &srcObject);

    Character &operator=(const Character &srcObject);

    virtual std::string const &getName() const;
    virtual void equip(AMateria *m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter &si);
    const AMateria *getMateria(int idx) const;

    virtual ~Character();
};

#endif