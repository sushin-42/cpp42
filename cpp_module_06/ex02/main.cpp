#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <thread>
#include <chrono>
#include <unistd.h>

int main(void)
{

    Base *base_1 = NULL;
    Base *base_2 = NULL;
    Base *base_3 = NULL;
    Base *base_4 = NULL;
    Base *base_5 = NULL;
    Base *arr[5] = {base_1, base_2, base_3, base_4, base_5};

    for (size_t i = 0; i < 5; i++)
    {
        arr[i] = generate();

        std::cout << "identify(Base *p) :  ";
        identify(arr[i]);

        std::cout << "identify(Base &p) :  ";
        identify(*arr[i]);

        std::cout << std::endl;
        sleep(1);
    }

    for (size_t i = 0; i < 5; i++)
    {
        delete arr[i];
        arr[i] = NULL;
    }
    return (0);
}

// std::this_thread::sleep_for(std::chrono::seconds(1));