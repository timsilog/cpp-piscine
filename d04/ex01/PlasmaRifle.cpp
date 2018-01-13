#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21) {
    this->_name = "Plasma Rifle";
    this->_dmg = 21;
    this->_apCost = 5;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) {
    *this = src;
}

PlasmaRifle::~PlasmaRifle(void) {}

void    PlasmaRifle::attack() const {
    std::cout << "* piouuu piouuu piouuu *\n";
}