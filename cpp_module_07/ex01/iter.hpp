#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T>
void iter(T *array, unsigned int len, void (*func)(const T &))
{
    unsigned int i;
    std::cout << "" << std::endl;
    for (i = 0; i < len; i++)
    {

        func(array[i]);
    }
}

template <typename T>
void test(T &x)
{
    std::cout << "" << std::endl;
    std::cout << typeid(T).name() << std::endl;
    std::cout << x << std::endl;
    std::cout << "" << std::endl;
}
#endif