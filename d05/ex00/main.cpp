#include "Bureaucrat.hpp"

int main() {
    Bureaucrat b("Bob", 1);

    Bureaucrat e("Ethan", 150);
    std::cout << b;
    b.decGrade();
    std::cout << b;
    std::cout << e;
    e.incGrade();
    std::cout << e;
    try
    {
        std::cout << "Trying to make someone grade 155\n";
        Bureaucrat c("Cat", 155);
    }
    catch (Bureaucrat::GradeTooLowException e)
    {
        std::cout << e.what();
    }
    try
    {
        std::cout << "Trying to make someone grade 0\n";
        Bureaucrat d("Dick", 0);
    }
    catch (Bureaucrat::GradeTooHighException e)
    {
        std::cout << e.what();
    }
    try
    {
        std::cout << b;
        b.incGrade();
        std::cout << b;
        b.incGrade();
        std::cout << b;
    }
    catch (Bureaucrat::GradeTooHighException e)
    {
        std::cout << e.what();
    }
    try
    {
        std::cout << e;
        e.decGrade();
        std::cout << e;
        e.decGrade();
        std::cout << e;
    }
    catch (Bureaucrat::GradeTooLowException e)
    {
        std::cout << e.what();
    }
}