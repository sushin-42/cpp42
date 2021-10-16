#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

#define BLUE "\e[34m"
#define GREEN "\e[32m"
#define CYAN "\e[36m"
#define RED "\e[31m"
#define PURPLE "\e[35m"
#define YELLOW "\e[33m"
#define RESET "\e[0m"

class Animal
{
protected:
    std::string _type;

public:
    Animal();
    virtual ~Animal();
    std::string getType(void) const;
    virtual const Animal &operator=(const Animal &srcObject);
    virtual std::string getBrainIdeas(const int i) const = 0;
    virtual void makeSound(void) const;
};

#endif