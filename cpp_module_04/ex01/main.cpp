#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
int main()
{
    // [case1]
    const Animal *dog = new Dog();
    const Animal *cat = new Cat();
    delete dog;
    delete cat;

    // [case2]
    // const Animal *dog1 = new Dog("dog1");
    // const Animal *dog2 = new Dog("dog2");
    // const Animal *dog3 = new Dog("dog3");
    // const Animal *dog4 = new Dog("dog4");
    // const Animal *dog5 = new Dog("dog5");
    // const Animal *cat1 = new Cat("cat1");
    // const Animal *cat2 = new Cat("cat2");
    // const Animal *cat3 = new Cat("cat3");
    // const Animal *cat4 = new Cat("cat4");
    // const Animal *cat5 = new Cat("cat5");

    // const Animal *arr[] = {dog1, dog2, dog3, dog4, dog5, cat1, cat2, cat3, cat4, cat5};

    // for (int i = 0; i < 10; i++)
    // {
    //     std::cout << arr[i]->getBrainIdeas(i) << std::endl;
    //     arr[i]->makeSound();
    //     delete arr[i];
    // }

    // [case3]
    // const Dog *dog1 = new Dog("dog1");
    // const Dog *dog2 = new Dog(*dog1);
    // const Dog *dog3 = new Dog(*dog2);
    // const Dog *dog4 = new Dog(*dog3);
    // const Dog *dog5 = new Dog(*dog4);
    // Cat cat1("cat1");
    // Cat cat3("cat3");
    // Cat cat2("cat2");
    // Cat cat4("cat4");
    // Cat cat5("cat5");
    // cat2 = cat1;
    // cat3 = cat2;
    // cat4 = cat3;
    // cat5 = cat4;

    // const Dog *arr[] = {dog1, dog2, dog3, dog4, dog5};
    // std::cout << dog1->_brain << std::endl;
    // std::cout << dog2->_brain << std::endl;
    // std::cout << dog3->_brain << std::endl;
    // std::cout << dog4->_brain << std::endl;
    // std::cout << dog5->_brain << std::endl;

    // std::cout << cat1.getType() << std::endl;
    // std::cout << &cat1 << std::endl;
    // std::cout << cat2.getType() << std::endl;
    // std::cout << &cat2 << std::endl;
    // std::cout << cat3.getType() << std::endl;
    // std::cout << &cat3 << std::endl;
    // std::cout << cat4.getType() << std::endl;
    // std::cout << &cat4 << std::endl;
    // std::cout << cat5.getType() << std::endl;
    // std::cout << &cat5 << std::endl;

    return (0);
}