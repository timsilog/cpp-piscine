#include "Victim.hpp"

Victim::Victim(void) {}

Victim::Victim(std::string name) : _name(name) {
    std::cout << "Some random victim called " << name
    << " just popped !\n";
}

Victim::Victim(Victim const & src) {
    *this = src;
}

Victim::~Victim(void) {
    std::cout << "Victim " << this->_name << " just died for no apparent reason !\n";
}

Victim & Victim::operator=(Victim const & rhs) {
    this->_name = rhs._name;
    return (*this);
}

std::string Victim::getName(void) {
    return (this->_name);
} 

void        Victim::getPolymorphed(void) const {
    std::cout << this->_name << " has been turned into a cute little sheep !\n";
}

std::ostream &  operator<<( std::ostream & o, Victim & rhs ) {
    o << "I'm " << rhs.getName() << " and I like otters !\n";
    return (o);
}