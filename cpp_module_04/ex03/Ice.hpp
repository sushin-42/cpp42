#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice(void);
    Ice(std::string const &type);
    Ice(const Ice &srcObject);

    virtual Ice &operator=(const Ice &srcObject);

    virtual Ice *clone() const;
    virtual void use(ICharacter &target);

    virtual ~Ice(void);
};

#endif