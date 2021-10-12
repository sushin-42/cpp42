#include "Phonebook.hpp"

int main()
{
    Phonebook phoneBook;

    while (!std::cin.eof())
    {
        phoneBook.displayInput();
        std::cout << "command > ";
        std::string input;
        std::getline(std::cin, input);

        if (input == "EXIT")
        {
            phoneBook.displayExit();
            exit(0);
        }
        else if (input == "ADD")
        {
            phoneBook.addContact();
        }
        else if (input == "SEARCH")
        {
            phoneBook.searchContact();
        }
    }
    return (0);
}