#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
private:
    const std::string _name;
    bool _signedState;
    const int _requiredToSignGrade;
    const int _requiredToExecuteGrade;

public:
    Form(void);
    Form(const std::string &name, const int &signgrade, const int &executegrade);
    Form(const Form &srcObject);
    Form &operator=(const Form &srcObject);

    class GradeTooHighException : public std::exception
    {
    public:
        const char *what(void) const _NOEXCEPT;
    };
    class GradeTooLowException : public std::exception
    {
        const char *what(void) const _NOEXCEPT;
    };

    const std::string &getName(void) const;
    const bool &getState(void) const;
    const int &getSignGrade(void) const;
    const int &getExecuteGrade(void) const;

    void beSigned(const Bureaucrat &bureaucrat);

    ~Form(void);
};
std::ostream &operator<<(std::ostream &out, const Form &srcObject);

#endif