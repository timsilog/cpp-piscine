#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
    this->_weapon = NULL;
}

void    HumanB::attack( void ) const {
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon& weapon) {
    this->_weapon = &weapon;
}