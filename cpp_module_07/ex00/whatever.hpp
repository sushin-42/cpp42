#include <iostream>
#include <string>

template <typename T>
void ft_swap(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;

    return;
}

template <typename T>
T ft_max(T x, T y)
{
    return (x > y ? x : y);
}

template <typename T>
T ft_min(T x, T y)
{
    return (x > y ? y : x);
}