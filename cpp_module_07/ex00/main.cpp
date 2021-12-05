#include "whatever.hpp"

int main(void)
{

    int a = 2;
    int b = 3;
    ::ft_swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::ft_min(a, b) << std::endl;
    std::cout << "max( a, b ) = " << ::ft_max(a, b) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::ft_swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::ft_min(c, d) << std::endl;
    std::cout << "max( c, d ) = " << ::ft_max(c, d) << std::endl;
    // int a = 1;
    // int b = 3;
    // double c = 1.2;
    // double d = 3.2;
    // float e = 3.5f;
    // float f = 1.5f;
    // char g = 'c';
    // char h = 'a';
    // std::string i = "sushin";
    // std::string j = "cpp";

    // std::cout << "[FT_SWAP]" << std::endl;
    // std::cout << "[ before ] = " << a << " " << b << std::endl;
    // ft_swap(a, b);
    // std::cout << "[ after  ] = " << a << " " << b << std::endl;
    // std::cout << "[ before ] = " << c << " " << d << std::endl;
    // ft_swap(c, d);
    // std::cout << "[ after  ] = " << c << " " << d << std::endl;
    // std::cout << "[ before ] = " << e << " " << f << std::endl;
    // ft_swap(e, f);
    // std::cout << "[ after  ] = " << e << " " << f << std::endl;
    // std::cout << "[ before ] = " << g << " " << h << std::endl;
    // ft_swap(g, h);
    // std::cout << "[ after  ] = " << g << " " << h << std::endl;
    // std::cout << "[ before ] = " << i << " " << j << std::endl;
    // ft_swap(i, j);
    // std::cout << "[ after  ] = " << i << " " << j << std::endl;
    // std::cout << std::endl;
    // std::cout << std::endl;

    // std::cout << "[FT_MAX]" << std::endl;
    // std::cout << a << " | " << b << "   reslut = " << ft_max(a, b) << std::endl;
    // std::cout << c << " | " << d << "   reslut = " << ft_max(c, d) << std::endl;
    // std::cout << e << " | " << f << "   reslut = " << ft_max(e, f) << std::endl;
    // std::cout << g << " | " << h << "   reslut = " << ft_max(g, h) << std::endl;
    // std::cout << i << " | " << j << "   reslut = " << ft_max(i, j) << std::endl;

    // std::cout << std::endl;
    // std::cout << std::endl;

    // std::cout << "[FT_MIN]" << std::endl;
    // std::cout << a << " | " << b << "   reslut = " << ft_min(a, b) << std::endl;
    // std::cout << c << " | " << d << "   reslut = " << ft_min(c, d) << std::endl;
    // std::cout << e << " | " << f << "   reslut = " << ft_min(e, f) << std::endl;
    // std::cout << g << " | " << h << "   reslut = " << ft_min(g, h) << std::endl;
    // std::cout << i << " | " << j << "   reslut = " << ft_min(i, j) << std::endl;

    return (0);
}