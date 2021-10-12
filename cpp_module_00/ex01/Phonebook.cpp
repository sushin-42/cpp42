#include "Phonebook.hpp"


void Phonebook::displayInput()
{
    std::cout << "  " << std::endl;
    std::cout << " Enter a command (ADD or SEARCH or EXIT) " << std::endl;
    std::cout << "  " << std::endl;
    std::cout << std::endl;

};

void Phonebook::displayExit()
{
    std::cout << "                                 " << std::endl;
    std::cout << "                Bye Bye                  " << std::endl;
    std::cout << "                                 " << std::endl;
};

void Phonebook::addContact()
{
    if (this->index == 8)
        this->index = 0;
    contact[this->index].setUser(this->index);
    if (addValueCheck(contact[this->index]))
    {
        index++;
        std::cout << "                ADD complete!             " << std::endl;
    }
};

bool Phonebook::addValueCheck(Contact contact)
{
    int check = 3;
    for(int i = 1; i <= 3; i++)
        if (contact.getUser(i).empty())
            check--;
    if (check == 0)
        return (0);
    else
        return (1);
};

void Phonebook::searchContact()
{
    contact[0].showHead();
    for(int i = 0; i < 8; i++)
        contact[i].showUser();
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "Enter index number, you can take detail contact Or Enter B, you can exit" << std::endl;
    while(true)
    {
        int input;
        std::cout << "search &> ";
        std::string search_input;
        std::getline(std::cin, search_input);
        if ((input = searchInputCheck(search_input, this->index)))
            contact[input - 1].detailContact();
        else if (search_input == "B")
            break ;
    }
};

int Phonebook::searchInputCheck(std::string search_input, int index)
{
    int input = 0;
	std::stringstream stoint(search_input);
	stoint >> input;

	if (stoint.fail())
        return (0);
    if (input >= 1 && input <= index)
        return (input);
    return (0);
};