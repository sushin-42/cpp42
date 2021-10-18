#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
// void printBureaucrat(Bureaucrat arr[3])
// {
//     for (int i = 0; i < 3; i++)
//         std::cout << arr[i] << std::endl;
// }
// void printForm(Bureaucrat arr[3])
// {
//     for (int i = 0; i < 3; i++)
//         std::cout << arr[i] << std::endl;
// }
void test_1()
{
    std::cout << std::endl;
    std::cout << "[test_1]" << std::endl;
    try
    {
        Bureaucrat Shin("Shin", 1);
        Bureaucrat Kang("Kang", 50);
        Intern someRandomIntern;
        Form *sForm;
        Form *rForm;
        Form *pForm;
        sForm = someRandomIntern.makeForm("ShrubberyCreationForm", "home");
        rForm = someRandomIntern.makeForm("RobotomyRequestForm", "robo");
        pForm = someRandomIntern.makeForm("PresidentialPardonForm", "sushin");

        std::cout << ">---------------------------------<" << std::endl;
        Shin.signForm(*sForm);
        Shin.signForm(*rForm);
        Shin.signForm(*pForm);
        // Kang.signForm(rForm);
        // Kang.signForm(pForm);
        std::cout << ">---------------------------------<" << std::endl;
        Shin.executeForm(*sForm);
        std::cout << ">---------------------------------<" << std::endl;
        Shin.executeForm(*rForm);
        std::cout << ">---------------------------------<" << std::endl;
        Shin.executeForm(*pForm);
        // Kang.executeForm(sForm);
        // Kang.executeForm(rForm);
        std::cout << ">---------------------------------<" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
// void test_2()
// {
//     std::cout << std::endl;
//     std::cout << "[test_2]" << std::endl;
//     try
//     {
//         Bureaucrat Shin("Shin", -1);
//         Bureaucrat Kang("Kang", 50);
//         Bureaucrat Park("Park", 100);
//         Bureaucrat Kim("Kim", 150);
//         Bureaucrat arr[4] = {Shin, Kang, Park, Kim};
//         print(arr);
//     }
//     catch (const std::exception &e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// }
// void test_3()
// {
//     std::cout << std::endl;
//     std::cout << "[test_3]" << std::endl;
//     try
//     {
//         Bureaucrat Shin("Shin", 1);
//         Bureaucrat Kang("Kang", 50);
//         Bureaucrat Park("Park", 100);
//         Bureaucrat Kim("Kim", 1500);
//         Bureaucrat arr[4] = {Shin, Kang, Park, Kim};
//         print(arr);
//     }
//     catch (const std::exception &e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// }
// void test_4()
// {
//     std::cout << std::endl;
//     std::cout << "[test_4]" << std::endl;
//     try
//     {
//         Bureaucrat Shin("Shin", 1);
//         Bureaucrat Kang("Kang", 50);
//         Bureaucrat Park("Park", 100);
//         Bureaucrat Kim("Kim", 150);
//         Bureaucrat arr[4] = {Shin, Kang, Park, Kim};
//         print(arr);
//         Shin.setGradeIncrement();
//     }
//     catch (const std::exception &e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// }
// void test_5()
// {
//     std::cout << std::endl;
//     std::cout << "[test_5]" << std::endl;
//     try
//     {
//         Bureaucrat Shin("Shin", 1);
//         Bureaucrat Kang("Kang", 50);
//         Bureaucrat Park("Park", 100);
//         Bureaucrat Kim("Kim", 150);
//         Bureaucrat arr[4] = {Shin, Kang, Park, Kim};
//         print(arr);
//         Kim.setGradeDecrement();
//     }
//     catch (const std::exception &e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// }
// void test_6()
// {
//     std::cout << std::endl;
//     std::cout << "[test_6]" << std::endl;
//     try
//     {
//         Bureaucrat Shin("Shin", 1);
//         Bureaucrat Kang("Kang", 50);
//         Bureaucrat Park("Park", 100);
//         Bureaucrat Kim("Kim", 150);
//         Bureaucrat arr[4] = {Shin, Kang, Park, Kim};
//         print(arr);
//         std::cout << std::endl;
//         Kang.setGradeIncrement();
//         Kang.setGradeIncrement();
//         Park.setGradeDecrement();
//         Park.setGradeDecrement();
//         Bureaucrat arr_2[4] = {Shin, Kang, Park, Kim};
//         print(arr_2);
//     }
//     catch (const std::exception &e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// }
// void test_7()

// {
//     std::cout << std::endl;
//     std::cout << "[test_7]" << std::endl;
//     try
//     {

//         Bureaucrat Shin("Shin", 1);
//         Bureaucrat Kang("Kang", 10);
//         Bureaucrat Park("Park", 100);
//         Bureaucrat Kim("Kim", 150);
//         Bureaucrat arr[4] = {Shin, Kang, Park, Kim};
//         print(arr);
//         std::cout << std::endl;
//         for (int i = 0; i < 10; i++)
//         {

//             std::cout << "index = " << i << ",  " << Kang << std::endl;
//             Kang.setGradeIncrement();
//         }
//     }
//     catch (const std::exception &e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// }
int main(void)
{
    test_1();
    // test_2();
    // test_3();
    // test_4();
    // test_5();
    // test_6();
    // test_7();

    return (0);
}