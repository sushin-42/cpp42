#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;

public:
    Bureaucrat(void);
    Bureaucrat(const std::string &name, const int &grade);
    Bureaucrat(const Bureaucrat &srcObject);
    Bureaucrat &operator=(const Bureaucrat &srcObject);

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
    const int &getGrade(void) const;

    void setGradeIncrement(void) throw(std::exception);
    void setGradeDecrement(void) throw(std::exception);

    ~Bureaucrat(void);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &srcObject);

#endif