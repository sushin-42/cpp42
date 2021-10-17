#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {}

Bureaucrat::Bureaucrat(const std::string &name, const int &grade) : _name(name), _grade(grade)
{
    if (_grade < 1)
        throw GradeTooHighException();
    else if (_grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &srcObject) : _name(srcObject.getName()), _grade(srcObject.getGrade()) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &srcObject)
{
    if (this != &srcObject)
    {
        *const_cast<std::string *>(&_name) = srcObject.getName();
        _grade = srcObject.getGrade();
    }
    return (*this);
}

const char *Bureaucrat::GradeTooHighException::what(void) const _NOEXCEPT
{
    return ("TooHigh");
}

const char *Bureaucrat::GradeTooLowException::what(void) const _NOEXCEPT
{
    return ("TooLow");
}

const std::string &Bureaucrat::getName(void) const
{
    return (_name);
}

const int &Bureaucrat::getGrade(void) const
{
    return (_grade);
}

void Bureaucrat::setGradeIncrement(void) throw(std::exception)
{
    if (_grade == 1)
        throw GradeTooHighException();
    _grade -= 1;
}

void Bureaucrat::setGradeDecrement(void) throw(std::exception)
{
    if (_grade == 150)
        throw GradeTooLowException();
    _grade += 1;
}

Bureaucrat::~Bureaucrat(void) {}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &srcObject)
{
    out << srcObject.getName() << "'s grade : " << srcObject.getGrade();
    return (out);
}