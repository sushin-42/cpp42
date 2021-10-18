#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form(target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &srcObject) : Form(srcObject) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &srcObject)
{
    if (this != &srcObject)
        *this = *static_cast<RobotomyRequestForm *>(&Form::operator=(srcObject));
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (!this->getState())
        throw noSignedFormException();
    if (executor.getGrade() > this->getExecuteGrade())
        throw GradeTooHighException();

    std::cout << "drillllllllllllll" << std::endl;
    srand(time(NULL));
    if (rand() % 2)
        std::cout << this->getName() << "  has been robotomized successfully." << std::endl;
    else
        std::cout << this->getName() << " failed robotomized." << std::endl;
}

const char *RobotomyRequestForm::noSignedFormException::what(void) const _NOEXCEPT
{
    return ("no signed form\n");
}
RobotomyRequestForm::~RobotomyRequestForm(void) {}