#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main() {
    Bureaucrat b("Bob", 1);
    std::cout << b;
    
    std::cout << "Creating intern\n";
    Intern i;
    i.makeForm("asd", "qwe");
    Form *s = i.makeForm("shrubbery creation", "Frank");
    Form *r = i.makeForm("robotomy request", "Allen");
    Form *p = i.makeForm("presidential pardon", "Andrew");
    
    b.signForm(*s);
    b.signForm(*r);
    b.signForm(*p);
    b.executeForm(*s);
    b.executeForm(*r);
    b.executeForm(*p);
    delete s;
    delete r;
    delete p;
}