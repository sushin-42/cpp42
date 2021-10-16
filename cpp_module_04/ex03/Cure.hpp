#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
    Cure(void);
    Cure(std::string const &type);
    Cure(const Cure &srcObject);

    virtual Cure &operator=(const Cure &srcObject);

    virtual Cure *clone() const;
    virtual void use(ICharacter &si);

    virtual ~Cure(void);
};

#endif