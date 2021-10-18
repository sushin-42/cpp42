#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{

public:
    RobotomyRequestForm(void);
    RobotomyRequestForm(const std::string &target);
    RobotomyRequestForm(const RobotomyRequestForm &srcObject);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &srcObject);

    virtual void execute(Bureaucrat const &executor) const;
    class noSignedFormException
        : public std::exception
    {
    public:
        const char *what(void) const _NOEXCEPT;
    };
    ~RobotomyRequestForm(void);
};

#endif