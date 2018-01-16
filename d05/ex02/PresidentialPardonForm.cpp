#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon Form", 25, 5) {
    this->_target = target;
    std::srand(std::time(0));
}

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon Form", 25, 5) {
    this->_target = "none";
    std::srand(std::time(0));
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) {
    *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {
    this->_target = rhs._target;
    return *this;
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    (void)executor;
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox.\n";
}