#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apCost(apcost), _dmg(damage) {}

AWeapon::AWeapon(void) {
    this->_name = "none";
    this->_dmg = 0;
    this->_apCost = 0;
}

AWeapon::AWeapon(AWeapon const & src) {
    *this = src;
}

AWeapon::~AWeapon(void) {
    std::cout << this->_name << " breaks.\n";
}

AWeapon &   AWeapon::operator=(AWeapon const & rhs) {
    this->_name = rhs._name;
    this->_dmg = rhs._dmg;
    this->_apCost = rhs._apCost;
    return (*this);
}

std::string AWeapon::getName() const {
    return (this->_name);
}

int         AWeapon::getAPCost() const {
    return (this->_apCost);
}

int         AWeapon::getDamage() const {
    return (this->_dmg);
}