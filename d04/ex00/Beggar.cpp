#include "Beggar.hpp"

Beggar::Beggar(void) : Victim() {}

Beggar::Beggar(std::string name) : Victim(name) {
    this->_name = name;
    std::cout << "Could you spare some change? Or even some bread?\n";
}

Beggar::~Beggar(void) {
    std::cout << "I wasn't meant to be in this world anyways...\n";
}

void    Beggar::getPolymorphed(void) const {
    std::cout << this->_name << " has been turned into a frog !\n";
}