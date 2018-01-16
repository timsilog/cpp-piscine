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
    catch (std::exception & e)
    {
        std::cout << e.what();
    }
    try
    {
        std::cout << "Trying to make someone grade 0\n";
        Bureaucrat d("Dick", 0);
    }
    catch (std::exception & e)
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
    catch (std::exception & e)
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
    catch (std::exception & e)
    {
        std::cout << e.what();
    }
}