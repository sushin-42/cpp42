#include "Form.hpp"

Form::Form(void)
    : _requiredToSignGrade(0), _requiredToExecuteGrade(0)
{
    _signedState = false;
}

Form::Form(const std::string &name, const int &signgrade, const int &executegrade)
    : _name(name), _requiredToSignGrade(signgrade), _requiredToExecuteGrade(executegrade)
{
    _signedState = false;
    if (_requiredToSignGrade < 1 || _requiredToExecuteGrade < 1)
        throw GradeTooHighException();
    else if (_requiredToSignGrade > 150 || _requiredToExecuteGrade > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &srcObject)
    : _name(srcObject.getName()), _requiredToSignGrade(srcObject.getSignGrade()), _requiredToExecuteGrade(srcObject.getExecuteGrade())
{
    _signedState = srcObject.getState();
}

Form &Form::operator=(const Form &srcObject)
{
    if (this != &srcObject)
    {
        *const_cast<std::string *>(&_name) = srcObject.getName();
        *const_cast<int *>(&_requiredToSignGrade) = srcObject.getSignGrade();
        *const_cast<int *>(&_requiredToExecuteGrade) = srcObject.getExecuteGrade();
        _signedState = srcObject.getState();
    }
    return (*this);
}

const char *Form::GradeTooHighException::what(void) const _NOEXCEPT
{
    return ("TooHigh");
}

const char *Form::GradeTooLowException::what(void) const _NOEXCEPT
{
    return ("TooLow");
}

const std::string &Form::getName(void) const
{
    return (_name);
}

const bool &Form::getState(void) const
{
    return (_signedState);
}

const int &Form::getSignGrade(void) const
{
    return (_requiredToSignGrade);
}

const int &Form::getExecuteGrade(void) const
{
    return (_requiredToExecuteGrade);
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= _requiredToSignGrade)
    {
        _signedState = true;
    }
    else
    {
        throw Form::GradeTooLowException();
    }
}

Form::~Form(void) {}

std::ostream &operator<<(std::ostream &out, const Form &srcObject)
{
    out << "[Form]" << srcObject.getName() << "'s required to sign grade : " << srcObject.getSignGrade() << std::endl
        << "[Form]" << srcObject.getName() << "'s required to exec grade : " << srcObject.getExecuteGrade();
    return (out);
}