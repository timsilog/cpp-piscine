#include "Character.hpp"

Character::Character(std::string const & name) : _name(name) {
    this->_ap = 40;
    this->_wpn = NULL;
}

Character::Character() {
    this->_name = "none";
    this->_ap = 40;
    this->_wpn = NULL;
}

Character::Character(Character const & src) {
    *this = src;
}

Character::~Character(void) {
    std::cout << this->_name << " dies.\n";
}

Character &     Character::operator=(Character const & rhs) {
    this->_name = rhs._name;
    return (*this);
}

std::string Character::getName() const {
    return (this->_name);
}

int         Character::getAp() const {
    return (this->_ap);
}

AWeapon*    Character::getWpn() const {
    return (this->_wpn);
}

bool        Character::hasWpn() const {
    if (this->_wpn == NULL)
        return (false);
    return (true);
}

void        Character::recoverAP() {
    if (this->_ap == 40) {
        std::cout << this->_name << " attempts to recover some AP, but AP is already at 40!\n";
        return;
    }
    this->_ap += 10;
    if (this->_ap > 40)
        this->_ap = 40;
    std::cout << this->_name << " recovers some AP and now has AP: "
    << this->_ap << std::endl;
}

void        Character::equip(AWeapon* w) {
    this->_wpn = w;
}

void        Character::attack(Enemy* e) {
    if (this->_ap < this->_wpn->getAPCost()) {
        std::cout << this->_name << "Doesn't have enough AP to attack with "
        << this->_wpn->getName() << std::endl;
        return;
    }
    this->_ap -= this->_wpn->getAPCost();
    std::cout << this->_name << " attacks " << e->getType()
    << " with a " << this->_wpn->getName() << std::endl;
    this->_wpn->attack();
    e->takeDamage(this->_wpn->getDamage());
    if (e->getHP() <= 0)
        delete (e);
}

std::ostream & operator<<(std::ostream & o, Character & rhs) {
    o << rhs.getName() << " has " << rhs.getAp() << " AP and ";
    if (rhs.hasWpn())
        o << "wields a " << rhs.getWpn()->getName() << std::endl;
    else
        o << "is unarmed\n";
    return (o);
}