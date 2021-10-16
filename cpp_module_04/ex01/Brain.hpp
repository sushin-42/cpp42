#ifndef BRAIN_HPP
#define BRAIN_HPP

#define BLUE "\e[34m"
#define GREEN "\e[32m"
#define CYAN "\e[36m"
#define RED "\e[31m"
#define PURPLE "\e[35m"
#define YELLOW "\e[33m"
#define RESET "\e[0m"

#include <iostream>
#include <string>

class Brain
{
private:
    std::string _ideas[100];

public:
    Brain();
    ~Brain();
    std::string getIdeas(const int i) const;
};

#endif