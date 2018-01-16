#include "Form.hpp"

Form::Form(std::string name, int g2s, int g2e) : _name(name), _grade2sign(g2s), _grade2exe(g2e) {
    if (g2s > 150 || g2e > 150)
        throw(Form::GradeTooLowException());
    else if (g2s < 1 || g2e < 1)
        throw(Form::GradeTooHighException());
    else
        this->_signed = false;
}

Form::Form() : _name("none"), _grade2sign(1), _grade2exe(1) {}

Form::Form(Form const & src) :
    _name(src._name), _grade2sign(src._grade2sign), _grade2exe(src._grade2exe) {
    *this = src;
}

Form::~Form() {}

Form & Form::operator=(Form const & rhs) {
    this->_signed = rhs._signed;
    return *this;
}

std::string Form::getName() const {
    return (this->_name);
}

bool        Form::isSigned() const {
    return (this->_signed);
}

int         Form::getGrade2Sign() const {
    return (this->_grade2sign);
}

int         Form::getGrade2Exe() const {
    return (this->_grade2exe);
}

void        Form::beSigned(Bureaucrat & b) {
    if (b.getGrade() <= this->_grade2sign)
        this->_signed = true;
}

void        Form::checkExe(Bureaucrat & executor) const {
    if (!this->_signed)
        throw(Form::NotSignedException());
    else if (executor.getGrade() > this->_grade2sign || executor.getGrade() > this->_grade2exe)
        throw(Form::GradeTooLowException());
    else
        this->execute(executor);
}

std::ostream & operator<<(std::ostream & o, Form & rhs) {
    o << "FORM: <" << rhs.getName() << ">";
    if (rhs.isSigned()) 
        o << "is <SIGNED>\n";
    else
        o << "is <NOT SIGNED>\n";
    o << "Needs grade <" << rhs.getGrade2Sign() << "> to be signed.\n"
    << "Needs grade <" << rhs.getGrade2Exe() << "> to be executed.\n";
    return (o);
}

Form::GradeTooHighException::GradeTooHighException() {}
Form::GradeTooHighException::GradeTooHighException(Form::GradeTooHighException const & src) {
    *this = src;
}
Form::GradeTooHighException::~GradeTooHighException() throw() {}
Form::GradeTooHighException & Form::GradeTooHighException::operator=(Form::GradeTooHighException const & src) {
    (void)src;
    return *this;
}
const char * Form::GradeTooHighException::what() const throw() {
    return ("Grade too high.\n");
}

Form::GradeTooLowException::GradeTooLowException() {}
Form::GradeTooLowException::GradeTooLowException(Form::GradeTooLowException const & src) {
    *this = src;
}
Form::GradeTooLowException::~GradeTooLowException() throw() {}
Form::GradeTooLowException & Form::GradeTooLowException::operator=(Form::GradeTooLowException const & src) {
    (void)src;
    return *this;
}
const char * Form::GradeTooLowException::what() const throw() {
    return ("Grade too low.\n");
}

Form::NotSignedException::NotSignedException() {}
Form::NotSignedException::NotSignedException(Form::NotSignedException const & src) {
    *this = src;
}
Form::NotSignedException::~NotSignedException() throw() {}
Form::NotSignedException & Form::NotSignedException::operator=(Form::NotSignedException const & src) {
    (void)src;
    return *this;
}
const char * Form::NotSignedException::what() const throw() {
    return ("Form is not signed yet.\n");
}