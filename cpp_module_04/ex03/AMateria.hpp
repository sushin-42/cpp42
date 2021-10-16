#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iomanip>
#include <iostream>

class ICharacter;

class AMateria
{
protected:
    std::string _type;

public:
    AMateria(void);
    AMateria(std::string const &type);
    AMateria(const AMateria &srcObject);

    virtual AMateria &operator=(const AMateria &srcObject);

    std::string const &getType() const;
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);

    virtual ~AMateria(void);
};

#endif