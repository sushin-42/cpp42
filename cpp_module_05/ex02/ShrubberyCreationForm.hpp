#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{

public:
    ShrubberyCreationForm(void);
    ShrubberyCreationForm(const std::string &target);
    ShrubberyCreationForm(const ShrubberyCreationForm &srcObject);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &srcObject);

    virtual void execute(Bureaucrat const &executor) const;
    class noSignedFormException
        : public std::exception
    {
    public:
        const char *what(void) const _NOEXCEPT;
    };
    ~ShrubberyCreationForm(void);
};

#endif