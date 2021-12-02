#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main(void)
{
    // Ice i;
    // Cure c;

    // AMateria *test1 = i.clone();
    // AMateria *test2 = c.clone();
    // std::cout << i.getType() << std::endl;
    // std::cout << c.getType() << std::endl;
    // std::cout << test1->getType() << std::endl;
    // std::cout << test2->getType() << std::endl;
    // ----------------------------------------------------
    // IMateriaSource *src = new MateriaSource();
    // std::cout << "-------------------------" << std::endl;
    // src->learnMateria(new Ice());
    // // src->learnMateria(new Cure());
    // // src->learnMateria(new Ice());
    // // src->learnMateria(new Cure());
    // std::cout << "-------------------------" << std::endl;
    // ICharacter *me = new Character("me");
    // AMateria *tmp;
    // std::cout << "-------------------------" << std::endl;

    // tmp = src->createMateria("ice");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);

    // std::cout << "-------------------------" << std::endl;
    // ICharacter *bob = new Character("bob");
    // me->use(0, *bob);
    // me->use(1, *bob);
    // std::cout << "-------------------------" << std::endl;

    // delete bob;
    // std::cout << "-------------------------" << std::endl;
    // delete me;
    // std::cout << "-------------------------" << std::endl;
    // delete src;
    // --------------------------------------------------------

    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter *me = new Character("me");
    AMateria *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter *bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;

    return (0);
}
// $> clang++ -W -Wall -Werror *.cpp
// $> ./a.out | cat -e
// * shoots an ice bolt at bob *$
// * heals bob's wounds *$

// include problem
// learnMateria without return; illegal hardware instruction problem