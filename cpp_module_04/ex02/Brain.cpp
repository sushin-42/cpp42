#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
    {
        _ideas[i] = "string in ideas" + std::to_string(i);
    }

    std::cout << BLUE;
    std::cout << " Brain constructor " << std::endl;
    std::cout << RESET;
}

std::string Brain::getIdeas(const int i) const
{
    return (_ideas[i]);
}

Brain::~Brain()
{
    std::cout << BLUE;
    std::cout << " Brain destructor " << std::endl;
    std::cout << RESET;
}
