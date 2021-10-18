#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form(target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &srcObject) : Form(srcObject) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &srcObject)
{
    if (this != &srcObject)
        *this = *static_cast<PresidentialPardonForm *>(&Form::operator=(srcObject));
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (!this->getState())
        throw noSignedFormException();
    if (executor.getGrade() > this->getExecuteGrade())
        throw GradeTooHighException();

    std::cout << getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

const char *PresidentialPardonForm::noSignedFormException::what(void) const _NOEXCEPT
{
    return ("no signed form\n");
}
PresidentialPardonForm::~PresidentialPardonForm(void) {}