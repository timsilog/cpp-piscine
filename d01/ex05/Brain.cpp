# include "Brain.hpp"

Brain::Brain( void ) {
    std::cout << "brain is born\n";
}

Brain::~Brain( void ) {
    std::cout << "brain is dead\n";
} 

std::string const   Brain::identify( void ) const {
    std::stringstream ss;
    ss << this;
    return ss.str();
}