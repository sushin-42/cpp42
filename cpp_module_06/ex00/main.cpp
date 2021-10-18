#include "Convert.hpp"

// ./convert 0
// char: Non displayable
// int: 0
// float: 0.0f
// double: 0.0

// ./convert nan
// char: impossible
// int: impossible
// float: nanf
// double: nan

// ./convert 42.0f
// char: '*'
// int: 42
// float: 42.0f
// double: 42.0

// int literal values: 0, -42, 42...
// float literal values: 0.0f, -4.2f, 4.2f... -inff, +inff and nanf.
// double literal values: 0.0, -4.2, 4.2...  -inf, +inf and nan.

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Input error" << std::endl;
        std::cout << "only ./conver [input]" << std::endl;
        return (-1);
    }
    Convert convert(argv[1]);
    std::cout << convert;

    // Convert a("0");
    // Convert b("-42");
    // Convert c("42");
    // Convert d("0.0f");
    // Convert e("-4.2f");
    // Convert f("4.2f");
    // Convert g("-inff");
    // Convert h("+inff");
    // Convert i("nanf");
    // Convert j("0.0");
    // Convert k("-4.2");
    // Convert l("4.2");
    // Convert m("-inf");
    // Convert n("+inf");
    // Convert o("nan");
    // std::cout << "[0]" << a << std::endl;
    // std::cout << "[-42]" << b << std::endl;
    // std::cout << "[42]" << c << std::endl;
    // std::cout << "[0.0f]" << d << std::endl;
    // std::cout << "[-4.2f]" << e << std::endl;
    // std::cout << "[4.2f]" << f << std::endl;
    // std::cout << "[-inff]" << g << std::endl;
    // std::cout << "[+inff]" << h << std::endl;
    // std::cout << "[nanf]" << i << std::endl;
    // std::cout << "[0.0]" << j << std::endl;
    // std::cout << "[-4.2]" << k << std::endl;
    // std::cout << "[4.2]" << l << std::endl;
    // std::cout << "[-inf]" << m << std::endl;
    // std::cout << "[+inf]" << n << std::endl;
    // std::cout << "[nan]" << o << std::endl;
    return (0);
}
