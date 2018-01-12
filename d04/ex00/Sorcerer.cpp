#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
    std::cout << name << ", " << title << ", is born !\n";
}

Sorcerer::Sorcerer(void) {}

Sorcerer::~Sorcerer() {
    std::cout << this->_name << ", " << this->_title
    << ", is dead. Consequences will never be the same !\n";
}

Sorcerer & Sorcerer::operator=(Sorcerer const & rhs) {
    *this = rhs;
}

std::string Sorcerer::getName(void) {
    return (this->_name);
}

std::string Sorcerer::getTitle(void) {
    return (this->_title);
}

void        Sorcerer::polymorph(Victim const & v) const {
    v.getPolymorphed();
}

std::ostream &  operator<<( std::ostream & o, Sorcerer & rhs ) {
    o << "I am " << rhs.getName() << ", " << rhs.getTitle()
    << ", and I like ponies !\n";
    return (o);
}