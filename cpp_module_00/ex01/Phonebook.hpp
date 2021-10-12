#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include "Contact.hpp"

class Phonebook
{
private:
    Contact contact[8];
    int index;

public:
    Phonebook()
    {
        index = 0;
    }
    void displayInput();
    void displayExit();
    void addContact();
    void searchContact();
    bool addValueCheck(Contact contact);
    int searchInputCheck(std::string search_input, int index);
};

#endif