#include "easyfind.hpp"
#include <vector>
#include <list>
#include <set>

int main(void)
{
    std::vector<int> vec;
    std::list<int> list;
    std::set<int> set;
    int arr[4] = {10, 20, 30, 40};

    for (size_t i = 0; i < 4; i++)
    {
        vec.push_back(arr[i]);
        list.push_back(arr[i]);
        set.insert(arr[i]);
    }

    std::cout << "" << std::endl;
    std::vector<int>::iterator iter_vec = easyfind(vec, 20);
    std::cout << "find 20 : " << *iter_vec << std::endl;
    iter_vec = easyfind(vec, 30);
    std::cout << "find 30 : " << *iter_vec << std::endl;
    try
    {
        std::cout << "not found 50 : ";
        iter_vec = easyfind(vec, 50);
        std::cout << *iter_vec << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "exception : " << e.what() << std::endl;
    }
    std::cout << "" << std::endl;
    std::list<int>::iterator iter_list = easyfind(list, 20);
    std::cout << "find 20 : " << *iter_list << std::endl;
    iter_list = easyfind(list, 30);
    std::cout << "find 30 : " << *iter_list << std::endl;
    try
    {
        std::cout << "not found 50 : ";
        iter_list = easyfind(list, 50);
        std::cout << *iter_list << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "exception : " << e.what() << std::endl;
    }
    std::cout << "" << std::endl;
    std::set<int>::iterator iter_set = easyfind(set, 20);
    std::cout << "find 20 : " << *iter_set << std::endl;
    iter_set = easyfind(set, 30);
    std::cout << "find 30 : " << *iter_set << std::endl;
    try
    {
        std::cout << "not found 50 : ";
        iter_set = easyfind(set, 50);
        std::cout << *iter_set << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "exception : " << e.what() << std::endl;
    }
    //

    return (0);
}
