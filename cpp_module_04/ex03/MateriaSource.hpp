#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *_inven[4];

public:
    MateriaSource();
    MateriaSource(const MateriaSource &srcObject);

    MateriaSource &operator=(const MateriaSource &srcObject);

    virtual void learnMateria(AMateria *);
    virtual AMateria *createMateria(std::string const &type);
    const AMateria *getMateria(int i) const;

    ~MateriaSource();
};

#endif
