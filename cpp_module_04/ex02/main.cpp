#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
int main()
{
    // Animal animal; !! error
    Cat cat;
    cat.makeSound();
    // cat._brain;

    // Animal *animal = &cat;
    // animal->makeSound();
    // animal->_brain; !!error

    // Cat *test = dynamic_cast<Cat *>(animal);

    // Dog dog;
    // dog.makeSound();
    return (0);
}