#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request Form", 72, 45) {
    this->_target = target;
    std::srand(std::time(0));
}

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request Form", 72, 45) {
    this->_target = "none";
    std::srand(std::time(0));
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) {
    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
    this->_target = rhs._target;
    return *this;
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    (void)executor;
    int coin = rand() % 2;

    if (coin)
        std::cout << "Makes some drilling noises, and " << this->_target << " has been robotomized.\n";
    else
        std::cout << "Execution failed..\n";
}