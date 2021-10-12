#ifndef CONTACT_HPP
#define CONTACT_HPP
#include "Phonebook.hpp"

class Contact
{

private:
    std::string user_info[6];
    static std::string headline[6];
    enum Field
    {
        eindex = 0,
        firstname,
        lastname,
        nickname,
        phonenumber,
        darkest_secret
    };

public:
    void showUser();
    void showHead();
    void detailContact();
    void setUser(int index);
    std::string getUser(int i);
};
#endif