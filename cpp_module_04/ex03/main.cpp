#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main(void)
{

    IMateriaSource *src = new MateriaSource();
    std::cout << "-------------------------" << std::endl;
    src->learnMateria(new Ice());
    // src->learnMateria(new Cure());
    // src->learnMateria(new Ice());
    // src->learnMateria(new Cure());
    std::cout << "-------------------------" << std::endl;
    ICharacter *me = new Character("me");
    AMateria *tmp;
    std::cout << "-------------------------" << std::endl;

    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    std::cout << "-------------------------" << std::endl;
    ICharacter *bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    std::cout << "-------------------------" << std::endl;

    delete bob;
    std::cout << "-------------------------" << std::endl;
    delete me;
    std::cout << "-------------------------" << std::endl;
    delete src;
    return (0);
}
// $> clang++ -W -Wall -Werror *.cpp
// $> ./a.out | cat -e
// * shoots an ice bolt at bob *$
// * heals bob's wounds *$

// include problem
// learnMateria without return; illegal hardware instruction problem