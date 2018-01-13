#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
    this->_hp = 170;
    this->_type = "Super Mutant";
    std::cout << "Gaaah. Me want smash head !\n";
}

SuperMutant::SuperMutant(SuperMutant const & src) {
    *this = src;
}

SuperMutant::~SuperMutant(void) {
    std::cout << "Aaargh ...\n";
}

void        SuperMutant::takeDamage(int amount) {
    if (amount <= 3)
        return;
    this->_hp -= amount - 3;
    if (this->_hp < 0)
        this->_hp = 0;
}