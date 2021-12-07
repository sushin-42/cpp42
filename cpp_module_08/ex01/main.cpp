#include "span.hpp"

int main()
{
    Span sp = Span(5);

    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    // Span test(8);
    // std::srand(unsigned(std::time(nullptr)));
    // std::vector<int> ga(5);
    // std::generate(ga.begin(), ga.end(), std::rand);
    // test.autoAddNumber(ga.begin(), ga.end());

    // std::cout << test.shortestSpan() << std::endl;
    // std::cout << test.longestSpan() << std::endl;

    // Span test1(5);

    // try
    // {
    //     test1.addNumber(3);
    //     test1.addNumber(9); // disappear
    //     test1.addNumber(5); // disappear

    //     std::cout << test1.shortestSpan() << std::endl;
    //     std::cout << test1.longestSpan() << std::endl;
    // }
    // catch (std::exception &e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    // Span test2(50000);

    // srand(time(NULL));
    // try
    // {
    //     for (int i = 0; i < 49999; i++)
    //     {
    //         test2.addNumber(rand());
    //     }

    //     std::cout << test2.shortestSpan() << std::endl;
    //     std::cout << test2.longestSpan() << std::endl;
    // }
    // catch (std::exception &e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    return (0);
}
