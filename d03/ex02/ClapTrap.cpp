#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name) {
    std::cout << "<CLAPTRAP CREATED>\n";
}

ClapTrap::ClapTrap(ClapTrap const & src) {
    *this = src;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "<CLAPTRAP DESTROYED>\n";
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs) {
    this->_name = rhs._name;
    this->_hp = rhs._hp;
    this->_maxHp = rhs._maxHp;
    this->_ep = rhs._ep;
    this->_maxEp = rhs._maxEp;
    this->_lvl = rhs._lvl;
    this->_mAtk = rhs._mAtk;
    this->_rAtk = rhs._rAtk;
    this->_def = rhs._def;
    return (*this);
}

int     ClapTrap::getHp(void) {
    return (this->_hp);
}

int     ClapTrap::getMaxHp(void) {
    return (this->_maxHp);
}

int     ClapTrap::getEp(void) {
    return (this->_ep);
}

int     ClapTrap::getMaxEp(void) {
    return (this->_maxEp);
}

std::string ClapTrap::announce(void) {
    std::string a = this->_type + " <" + this->_name + ">: ";
    return (a);
}

std::string ClapTrap::announceHp(void) {
    std::string a = std::to_string(this->_hp) + "/" + std::to_string(this->_maxHp) + "\n";
    return (a);
}

std::string ClapTrap::announceEp(void) {
    std::string a = std::to_string(this->_ep) + "/" + std::to_string(this->_maxEp) + "\n";
    return (a);
}

void    ClapTrap::rangedAttack(std::string const & target) {
    std::cout << this->announce() << "Does a ranged attack on <"
    << target << ">, causing <" << this->_rAtk << "> points of damage!\n";
}

void    ClapTrap::meleeAttack(std::string const & target) {
    std::cout << this->announce() << "Does a melee attack on <"
    << target << ">, causing <" << this->_mAtk << "> points of damage!\n";
}

void    ClapTrap::takeDamage(unsigned int amount) {
    int actual;

    actual = amount - this->_def;
    std::cout << this->announce() << "Receives <" << actual << "> damage!\n";
    this->_hp -= actual;
    if (this->_hp < 0)
        this->_hp = 0; // .dies() function?
}

void    ClapTrap::beRepaired(unsigned int amount) {
    this->_hp += amount;
    if (this->_hp > this->_maxHp)
        this->_hp = this->_maxHp;
    std::cout << this->announce() << "Repairs for <" << amount << "> health!\n"; 
}