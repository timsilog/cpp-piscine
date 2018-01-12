#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : _name(name), _hp(100), _maxHp(100), _ep(100), _maxEp(100), _lvl(1), _mAtk(30), _rAtk(20), _def(5) {
    std::string quotes[5] = {
        "Battlecruiser operational.\n",
        "Power overwhelming!\n",
        "READY TO ROLL OUT.\n",
        "My life for Aiur..\n",
        "SCV good to go, sir!\n"
    };

    std::srand(std::time(0));
    std::cout << this->announce() << quotes[rand() % 5];
}

FragTrap::FragTrap(FragTrap const & src) {
    *this = src;
}

FragTrap::~FragTrap(void) {
    std::string quotes[5] = {
        "Snake? SNAAAAAAAAKE!!!",
        "FATALITY",
        "Thank you Mario, but your princess is in another castle.",
        "The cake is a lie.",
        "Stay Frosty."
    };
    std::cout << this->announce() << quotes[rand() % 5] << " <DIES>\n";
}

FragTrap & FragTrap::operator=(FragTrap const & rhs) {
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

int     FragTrap::getHp(void) {
    return (this->_hp);
}

int     FragTrap::getMaxHp(void) {
    return (this->_maxHp);
}

int     FragTrap::getEp(void) {
    return (this->_ep);
}

int     FragTrap::getMaxEp(void) {
    return (this->_maxEp);
}

std::string FragTrap::announce(void) {
    std::string a = "FR4G-TP <" + this->_name + ">: ";
    return (a);
}

std::string FragTrap::announceHp(void) {
    std::string a = std::to_string(this->_hp) + "/" + std::to_string(this->_maxHp) + "\n";
    return (a);
}

std::string FragTrap::announceEp(void) {
    std::string a = std::to_string(this->_ep) + "/" + std::to_string(this->_maxEp) + "\n";
    return (a);
}

void    FragTrap::rangedAttack(std::string const & target) {
    std::cout << this->announce() << "Does a ranged attack on <"
    << target << ">, causing <" << this->_rAtk << "> points of damage!\n";
}

void    FragTrap::meleeAttack(std::string const & target) {
    std::cout << this->announce() << "Does a melee attack on <"
    << target << ">, causing <" << this->_mAtk << "> points of damage!\n";
}

void    FragTrap::takeDamage(unsigned int amount) {
    int actual;

    actual = amount - this->_def;
    std::cout << this->announce() << "Receives <" << actual << "> damage!\n";
    this->_hp -= actual;
    if (this->_hp < 0)
        this->_hp = 0; // .dies() function?
}

void    FragTrap::beRepaired(unsigned int amount) {
    this->_hp += amount;
    if (this->_hp > this->_maxHp)
        this->_hp = this->_maxHp;
    std::cout << this->announce() << "Repairs for <" << amount << "> health!\n"; 
}

void    FragTrap::vaulthunter_dot_exe(std::string const & target) {
    std::string atks[5] = {
        "Hadouken",
        "Shoryuken",
        "Spinning Bird Kick",
        "Sonic Boom",
        "Hurricane Kick"
    };

    if (this->_ep < 25)
    {
        std::cout << this->announce() << "Not enough energy!\n";
        return;
    }
    this->_ep -= 25;
    std::cout << this->announce() << "Uses <" << atks[rand() % 5] << "> on <"
    << target << ">!\n";
}