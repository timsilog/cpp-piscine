#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
    this->_hp = 80;
    this->_type = "RadScorpion";
    std::cout << "* click click click *\n";
}

RadScorpion::RadScorpion(RadScorpion const & src) {
    *this = src;
}

RadScorpion::~RadScorpion(void) {
    std::cout << "* SPROTCH *\n";
}

void        RadScorpion::takeDamage(int amount) {
    if (amount <= 3)
        return;
    this->_hp -= amount - 3;
    if (this->_hp < 0)
        this->_hp = 0;
}