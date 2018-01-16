#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const & src) {
    *this = src;
}

Intern::~Intern() {}

Intern & Intern::operator=(Intern const & rhs) {
    (void)rhs;
    return *this;
}

Form*    Intern::makeForm(std::string fname, std::string target) {
    if (fname == "Shrubbery Creation" || fname == "shrubbery creation") {
        std::cout << "Intern creates <Shrubbery Creation>\n";
        return (new ShrubberyCreationForm(target));
    }
    else if (fname == "Robotomy Request" || fname == "robotomy request") {
        std::cout << "Intern creates <Robotomy Request>\n";
        return (new RobotomyRequestForm(target));
    }
    else if (fname == "Presidential Pardon" || fname == "presidential pardon") {
        std::cout << "Intern creates <Presidential Pardon>\n";
        return (new PresidentialPardonForm(target));
    }
    else
        std::cout << "<" << fname << "> is not a valid form.\n";
    return (NULL);
}