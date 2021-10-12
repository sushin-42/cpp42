#include <iostream>
#include <string>
#include <locale>

int main(int argc, char *argv[])
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; i < argc; i++)
    {
        std::string str(argv[i]);
        for (size_t k = 0; k < str.length(); k++)
        {
            std::cout << static_cast<char>(std::toupper(argv[i][k]));
        }
    }
    std::cout << std::endl;
}