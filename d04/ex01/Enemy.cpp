#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type) {}

Enemy::Enemy() {
    this->_hp = 0;
    this->_type = "none";   
}

Enemy::Enemy(Enemy const & src) {
    *this = src;
}

Enemy::~Enemy(void) {}

Enemy &     Enemy::operator=(Enemy const & rhs) {
    this->_hp = rhs._hp;
    this->_type = rhs._type;
    return (*this);
}

std::string Enemy::getType() const {
    return (this->_type);
}

int         Enemy::getHP() const {
    return (this->_hp);
}

void        Enemy::takeDamage(int amount) {
    this->_hp -= amount;
    if (this->_hp < 0)
        this->_hp = 0;
}