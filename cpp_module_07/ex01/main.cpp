#include "iter.hpp"

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    double b[5] = {1.2, 2.2, 3.2, 4.2, 5.2};
    float c[5] = {1.1f, 2.1f, 3.1f, 4.1f, 5.1f};
    char d[5] = {'a', 'b', 'c', 'd', 'e'};
    bool e[5] = {1, 0, 1, 0, 1};
    std::string f[5] = {"aa", "bb", "cc", "dd", "ee"};

    iter(a, 5, &test);
    iter(b, 5, &test);
    iter(c, 5, &test);
    iter(d, 5, &test);
    iter(e, 5, &test);
    iter(f, 5, &test);
    return (0);
}