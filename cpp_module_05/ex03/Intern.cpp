#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(const Intern &i)
{
    static_cast<void>(i);
}

Intern &Intern::operator=(const Intern &i)
{
    return (*const_cast<Intern *>(&i));
}

const char *Intern::NotExistFormException::what(void) const _NOEXCEPT
{
    return ("NotExistForm\n");
}

Form *Intern::makeForm(const std::string &formname, const std::string &target)
{
    const std::string arr[3] = {"ShrubberyCreationForm",
                                "RobotomyRequestForm",
                                "PresidentialPardonForm"};
    try
    {
        for (int index = 0; index < 3; index++)
        {
            if (arr[index] == formname)
            {
                std::cout << "Intern create " << formname << std::endl;
                switch (index)
                {
                case 0:
                    return (new ShrubberyCreationForm(target));
                    break;
                case 1:
                    return (new RobotomyRequestForm(target));
                    break;
                case 2:
                    return (new PresidentialPardonForm(target));
                    break;
                }
            }
        }
        throw NotExistFormException();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return (nullptr);
    }
}

Intern::~Intern(void)
{
}