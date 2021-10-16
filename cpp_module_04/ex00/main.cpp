#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{

    const Animal *meta = new Animal();
    const Animal *dog = new Dog();
    const Animal *cat = new Cat();

    const WrongAnimal *wrongMeta = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat();

    // standard
    std::cout << "[standard]" << std::endl;
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    // wrong
    std::cout << "[wrong]" << std::endl;
    std::cout << wrongCat->getType() << " " << std::endl;

    // standard
    std::cout << "[standard]" << std::endl;
    dog->makeSound(); // will output the cat sound!
    cat->makeSound();
    meta->makeSound();
    // wrong
    std::cout << "[wrong]" << std::endl;
    wrongCat->makeSound();
    wrongMeta->makeSound();

    delete meta;
    delete dog;
    delete cat;
    delete wrongMeta;
    delete wrongCat;
    return (0);
}