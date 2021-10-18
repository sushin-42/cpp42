#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form(target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &srcObject) : Form(srcObject) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &srcObject)
{
    if (this != &srcObject)
        *this = *static_cast<ShrubberyCreationForm *>(&Form::operator=(srcObject));
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (!this->getState())
        throw noSignedFormException();
    if (executor.getGrade() > this->getExecuteGrade())
        throw GradeTooHighException();

    std::ofstream treeWrite(this->getName() + "_shrubbery");
    if (!treeWrite.is_open())
        return;
    treeWrite << "             _{} _{}{}/}/}/}__\n             {/{/}}{/{/}}(}}{/}} _\n            {/{/}}{/{/}}(_)}}{/{/}}  _\n         {}{/(}}}}{/{/}}}}{/){/}}}} /}}\n        {/{/(_)/}{}{/)}}{}(_){/}/}/}/}\n       _{}{/{/{}{/{/(_)/}/}/}{}(/}/}/}\n      {/{/{}{}{}(/}{}{}/}/}{}}(_){}/}}}\n      _{}{/{}{/(_)}}/}{/{/{/}}}})}}{/}}\n     {/{/{}{}(/}{/{}{}{}/})/}{}(_)/}/}}}\n      {}{}/}(_){}{}{}/}/}(_){}/}{}/}/})/}\n       {/{}{}/}{/{}{}{}/}/}{}{}/}/}}}(_)\n      {/{}{}/}{/){}{}{}/}/}{}{}(/}/}}}/}\n       {/{}{}/}(_){}{}{}(/}/}{}(_)/}/}}}\n         {/({/{}{/{}{}/}(_){}/}/}}}/}(}}\n          (_){/{}/}{}{}/}/}{}{})/}/}(_)\n            {/{/{}{}/}{/{}{}{}(_)/}\n             {/{}{}{}/}/}{}{}}}/}\n              {){/ {}/}{}/} }}}}\n              (_)  }.-@.-/\n          __...--- |,-.-,| --...__\n   _...--.   .-,   |,-.-,|  , -.  ..--..__\n -.    , .  . ,    |.,-._| ,  . .  ,   jro\n .  ,-  ,    .--,  | ,-.,|    .  ,  . ,\n          , ..     |,-_.-|\n  .  ,  .       _.-|-._ -|-._  .  ,  .\n              .,   |,- .-|   ,.\n  ..-,   , .  ,.   `-._.-�   .,  ,  - .\n   .-, ,        ,-._______.-,     ,  .\n        .      ~,\n    .       .   |}   .    , ,-.\n";
    treeWrite.close();
}

const char *ShrubberyCreationForm::noSignedFormException::what(void) const _NOEXCEPT
{
    return ("no signed form\n");
}
ShrubberyCreationForm::~ShrubberyCreationForm(void) {}