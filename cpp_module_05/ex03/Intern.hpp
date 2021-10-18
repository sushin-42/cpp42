#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
    Intern(void);
    Intern(const Intern &i);

    Intern &operator=(const Intern &i);

    class NotExistFormException
        : public std::exception
    {
    public:
        const char *what(void) const _NOEXCEPT;
    };

    Form *makeForm(const std::string &type, const std::string &name);

    ~Intern(void);
};

#endif