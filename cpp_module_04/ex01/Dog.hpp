#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
    Brain *_brain;

public:
    Dog();
    Dog(std::string name);
    Dog(const Dog &srcObject);
    const Dog &operator=(const Dog &srcObject);
    std::string getBrainIdeas(const int i) const;
    ~Dog();
    void makeSound(void) const;
};

#endif