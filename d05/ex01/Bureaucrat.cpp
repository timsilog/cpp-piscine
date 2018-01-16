#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    if (grade > 150)
        throw(Bureaucrat::GradeTooLowException());
    if (grade < 1)
        throw(Bureaucrat::GradeTooHighException());
    this->_grade = grade;
}

Bureaucrat::Bureaucrat() : _name("none") {
    this->_grade = 150;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) {
    *this = src;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {
    this->_grade = rhs._grade;
    return (*this);
}

std::string Bureaucrat::getName() {
    return (this->_name);
}

int         Bureaucrat::getGrade() {
    return (this->_grade);
}

void        Bureaucrat::incGrade() {
    if (this->_grade == 1)
        throw(Bureaucrat::GradeTooHighException());
    else
        this->_grade--;
}

void        Bureaucrat::decGrade() {
    if (this->_grade == 150)
        throw(Bureaucrat::GradeTooLowException());
    else
        this->_grade++;
}

void        Bureaucrat::signForm(Form & f) {
    if (this->_grade <= f.getGrade2Sign() && !f.isSigned())
        f.beSigned(*this);
    else {
        std::cout << "Bureaucrat<"
        << this->_name << "> cannot sign Form<"
        << f.getName(); 
        if (this->_grade > f.getGrade2Sign())
            std::cout << "> because grade too low.\n";
        else if (f.isSigned())
            std::cout << "> because it is already signed.\n";
    }
}

std::ostream & operator<<(std::ostream & o, Bureaucrat & rhs) {
    o << "<" << rhs.getName() << ">, bureaucrat grade <" << rhs.getGrade() << ">.\n";
    return (o);
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {}
Bureaucrat::GradeTooHighException::GradeTooHighException(Bureaucrat::GradeTooHighException const & src) {
    *this = src;
}
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}
Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(Bureaucrat::GradeTooHighException const & src) {
    (void)src;
    return *this;
}
const char * Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade too high.\n");
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {}
Bureaucrat::GradeTooLowException::GradeTooLowException(Bureaucrat::GradeTooLowException const & src) {
    *this = src;
}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}
Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const & src) {
    (void)src;
    return *this;
}
const char * Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade too low.\n");
}