#include "Bureaucrat.hpp"
#include "Form.hpp"

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

    std::cout << std::endl;
    try
    {
        std::cout << "Trying to create form with high grade requirements..\n";
        Form p("asd", 0, 0);
    }
    catch (std::exception & e)
    {
        std::cout << e.what();
    }
    try
    {
        std::cout << "Trying to create form with low grade requirements..\n";
        Form w("asd", 155, 155);
    }
    catch (std::exception & e)
    {
        std::cout << e.what();
    }
    Form f("Some Paper", 5, 5);
    std::cout << f;
    std::cout << "Trying to have " 
    << e.getName() << " sign " << f.getName() << std::endl;
    e.signForm(f);
    std::cout << "Trying to have " 
    << b.getName() << " sign " << f.getName() << std::endl;
    b.signForm(f);
    std::cout << f;
    std::cout << "Trying to have " 
    << b.getName() << " sign " << f.getName() << std::endl;
    b.signForm(f);
}