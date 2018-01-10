# include "Human.hpp"

Human::Human( void ) {
    this->_brain = new Brain();
    std::cout << "Human is born\n";
}

Human::~Human(void) {
    delete this->_brain;
    std::cout << "Human dies\n";
}

Brain const &       Human::getBrain( void ) const {
    return (*this->_brain);
}

std::string const   Human::identify( void ) const {
    return(this->_brain->identify());
}