#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50) {
    this->_name = "Power Fist";
    this->_dmg = 50;
    this->_apCost = 8;
}

PowerFist::PowerFist(PowerFist const & src) {
    *this = src;
}

PowerFist::~PowerFist(void) {}

void    PowerFist::attack() const {
    std::cout << "* pschhh... SBAM! *\n";
}