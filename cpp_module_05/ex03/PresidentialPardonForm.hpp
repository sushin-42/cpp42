#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    // const std::string _name;
    // bool _signedState;
    // const int _requiredToSignGrade;
    // const int _requiredToExecuteGrade;

public:
    PresidentialPardonForm(void);
    PresidentialPardonForm(const std::string &target);
    PresidentialPardonForm(const PresidentialPardonForm &srcObject);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &srcObject);

    virtual void execute(Bureaucrat const &executor) const;
    class noSignedFormException
        : public std::exception
    {
    public:
        const char *what(void) const _NOEXCEPT;
    };
    ~PresidentialPardonForm(void);
};

#endif