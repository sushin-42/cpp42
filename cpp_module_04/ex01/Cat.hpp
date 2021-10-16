#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
    Brain *_brain;

public:
    Cat();
    Cat(std::string name);
    Cat(const Cat &srcObject);
    const Cat &operator=(const Cat &srcObject);
    std::string getBrainIdeas(const int i) const;
    ~Cat();
    void makeSound(void) const;
};

#endif