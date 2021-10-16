#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

#define BLUE "\e[34m"
#define GREEN "\e[32m"
#define CYAN "\e[36m"
#define RED "\e[31m"
#define PURPLE "\e[35m"
#define YELLOW "\e[33m"
#define RESET "\e[0m"

class WrongAnimal
{
protected:
    std::string _type;

public:
    WrongAnimal();
    virtual ~WrongAnimal();
    std::string getType(void) const;
    void makeSound(void) const;
};

#endif