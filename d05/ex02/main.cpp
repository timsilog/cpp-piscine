#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    Bureaucrat b("Bob", 1);
    Bureaucrat c("Carl", 150);
    std::cout << b;
    std::cout << c;
    
    ShrubberyCreationForm s("home");
    RobotomyRequestForm r("some thing");
    PresidentialPardonForm p("Charlie");

    c.signForm(s);
    c.signForm(r);
    c.signForm(p);
    std::cout << "Trying to have unsigned forms be executed..\n";
    try {
        b.executeForm(s);
    }
    catch (std::exception & e) {
        std::cout << e.what();
    }
    try {
        b.executeForm(r);
    }
    catch (std::exception & e) {
        std::cout << e.what();
    }
    try {
        b.executeForm(p);
    }
    catch (std::exception & e) {
        std::cout << e.what();
    }
    b.signForm(s);
    b.signForm(r);
    b.signForm(p);
    std::cout << "Trying to have low level Bureaucrat execute all signed forms..\n";
    try {
        c.executeForm(s);
    }
    catch (std::exception & e) {
        std::cout << e.what();
    }
    try {
        c.executeForm(r);
    }
    catch (std::exception & e) {
        std::cout << e.what();
    }
    try {
        c.executeForm(p);
    }
    catch (std::exception & e) {
        std::cout << e.what();
    }
    b.executeForm(s);
    b.executeForm(r);
    b.executeForm(p);
}