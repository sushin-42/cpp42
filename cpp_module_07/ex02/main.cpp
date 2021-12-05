#include "Array.hpp"

int main(void)
{
    Array<int> c(2);
    Array<char> d(2);

    c[0] = 10;
    c[1] = 20;

    d[0] = 'a';
    d[1] = 'b';

    Array<int> e(5);
    Array<char> f(5);

    std::cout << "[before size] e = " << e.size() << std::endl;
    std::cout << "[before size] f = " << f.size() << std::endl;
    Array<int> g(c);
    Array<char> h(d);

    e = g;
    f = h;
    std::cout << "[after size] e = " << e.size() << std::endl;
    std::cout << "[after size] f = " << f.size() << std::endl;

    // c[0] = 10;
    // c[1] = 20;

    // d[0] = 'a';
    // d[1] = 'b';
    for (int k = 0; k < 2; k++)
        std::cout << c[k] << std::endl;
    for (int k = 0; k < 2; k++)
        std::cout << d[k] << std::endl;
    for (int k = 0; k < 2; k++)
        std::cout << e[k] << std::endl;
    for (int k = 0; k < 2; k++)
        std::cout << f[k] << std::endl;
    for (int k = 0; k < 2; k++)
        std::cout << g[k] << std::endl;
    for (int k = 0; k < 2; k++)
        std::cout << h[k] << std::endl;
    try
    {
        std::cout << h[3] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}
