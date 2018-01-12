#include "Peon.hpp"

Peon::Peon(void) : Victim() {}

Peon::Peon(std::string name) : Victim(name) {
    this->_name = name;
    std::cout << "Zog zog.\n";
}

Peon::Peon(Peon const & src) {
    *this = src;
}

Peon::~Peon(void) {
    std::cout << "Bleuark...\n";
}

void        Peon::getPolymorphed(void) const {
    std::cout << this->_name << " has been turned into a pinky pony !\n";
}