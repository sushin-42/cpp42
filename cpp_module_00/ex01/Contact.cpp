#include "Phonebook.hpp"

std::string Contact::headline[6] =
    {
        "Index",
        "Firstname",
        "Lastname",
        "Nickname",
        "Phonenumber",
        "Darkest_secret"};

void Contact::showHead()
{
    for (int i = eindex; i <= nickname; i++)
    {
        std::cout << std::setw(10) << headline[i] << '|';
    }
    std::cout << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
};

void Contact::showUser()
{
    for (int i = eindex; i <= nickname; i++)
    {
        if (user_info[i].length() > 10)
            std::cout << user_info[i].substr(0, 9) << '.';
        else
            std::cout << std::setw(10) << user_info[i];
        std::cout << '|';
    }
    std::cout << std::endl;
};

void Contact::detailContact()
{
    for (int i = firstname; i <= darkest_secret; i++)
    {
        std::cout << headline[i] << " : " << user_info[i] << std::endl;
    }
};

void Contact::setUser(int index)
{
    user_info[0] = std::to_string(index + 1);
    for (int i = firstname; i <= darkest_secret; i++)
    {
        std::cout << headline[i] << std::endl;
        std::cout << "$> ";
        std::getline(std::cin, user_info[i]);
    }
};

std::string Contact::getUser(int i)
{
    return this->user_info[i];
};