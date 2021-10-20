#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

// that randomly instanciates A, B or C and returns the instance as a Base pointer.
Base *generate(void)
{
    int randomNum;

    srand(time(NULL));
    randomNum = rand() % 3;

    switch (randomNum)
    {
    case 0:
        std::cout << "Construct A" << std::endl;
        return (new A());
    case 1:
        std::cout << "Construct B" << std::endl;
        return (new B());
    case 2:
        std::cout << "Construct C" << std::endl;
        return (new C());
    }
    return (NULL);
}

// that displays "A", "B" or "C" according to the real type of p.
void identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
}

// You should never use a pointer inside this function.
// that displays "A", "B" or "C" according to the real type of p.
void identify(Base &p)
{
    try
    {
        (void)dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
    }
    catch (const std::exception &e)
    {
        try
        {
            (void)dynamic_cast<B &>(p);
            std::cout << "B" << std::endl;
        }
        catch (const std::exception &e)
        {
            try
            {
                (void)dynamic_cast<C &>(p);
                std::cout << "C" << std::endl;
            }
            catch (const std::exception &e)
            {
                std::cerr << "dynamic casting error" << std::endl;
            }
        }
    }
}

Base::~Base(){};