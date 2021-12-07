#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>

class notFoundException : public std::exception
{
    const char *what(void) const _NOEXCEPT
    {
        return ("Cannot Found Target");
    }
};

template <typename T>
typename T::iterator easyfind(T &container, int target)
{
    typename T::iterator result;

    result = std::find(container.begin(), container.end(), target);
    if (result != container.end())
    {
        return (result);
    }
    else
    {
        throw(notFoundException());
    }
}

#endif