#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <cstddef>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <ctime>

class Span
{
private:
    std::vector<int> _store;
    unsigned int _n;

public:
    Span(void);
    Span(unsigned int n);

    void addNumber(int value) throw(std::exception);
    std::size_t shortestSpan(void) throw(std::exception);
    std::size_t longestSpan(void) throw(std::exception);

    template <typename InputIter>
    void autoAddNumber(InputIter begin, InputIter end) throw(std::exception)
    {
        if (std::distance(begin, end) > _n)
        {
            throw(NotingSpaceException());
        }
        InputIter i;
        for (i = begin; i < end; i++)
        {
            _store.push_back(*i);
            // std::cout << *i << std::endl;
        }
    }

    class NotingSpaceException : public std::exception
    {
    public:
        const char *what(void) const _NOEXCEPT;
    };

    class CannotFoundSpanException : public std::exception
    {
    public:
        const char *what(void) const _NOEXCEPT;
    };
    ~Span(void);
};

#endif