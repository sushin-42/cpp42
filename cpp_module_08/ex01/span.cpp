#include "span.hpp"

const char *Span::NotingSpaceException::what(void) const _NOEXCEPT
{
    return ("Noting Space in Store");
}

const char *Span::CannotFoundSpanException::what(void) const _NOEXCEPT
{
    return ("Can't Found Span");
}

Span::Span(void)
{
    _n = 0;
}

Span::Span(unsigned int n)
{
    _n = n;
}

void Span::addNumber(int value) throw(std::exception)
{
    if (_store.size() == _n)
    {
        throw(NotingSpaceException());
    }
    _store.push_back(value);
}

std::size_t Span::shortestSpan(void) throw(std::exception)
{
    if (_store.size() <= 1)
        throw(CannotFoundSpanException());
    std::vector<int> tempStore;
    std::size_t i;
    long int span;

    tempStore = _store;
    std::sort(tempStore.begin(), tempStore.end());
    span = std::abs(static_cast<long int>(tempStore[1]) - static_cast<long int>(tempStore[0]));
    for (i = 1; i < (tempStore.size() - 1); i++)
    {
        if (std::abs(tempStore[i + 1] - tempStore[i]) < span)
        {
            span = std::abs(tempStore[i + 1] - tempStore[i]);
        }
    }
    return (span);
}

std::size_t Span::longestSpan(void) throw(std::exception)
{
    if (_store.size() <= 1)
        throw(CannotFoundSpanException());
    long int min = *std::min_element(_store.begin(), _store.end());

    long int max = *std::max_element(_store.begin(), _store.end());

    return (std::abs(max - min));
}

Span::~Span(void)
{
}