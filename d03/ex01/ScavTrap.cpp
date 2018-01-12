#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : _name(name), _hp(100), _maxHp(100), _ep(50), _maxEp(50), _lvl(1), _mAtk(20), _rAtk(15), _def(3) {
    std::string quotes[5] = {
        "The gates are open.\n",
        "LEEEROYY JEEEEENNKIIIIIIIINSS.\n",
        "MRGLGLRGLLGGLRLRGLL.\n",
        "You require my assistance?\n",
        "That belongs in a museum!\n"
    };

    std::srand(std::time(0));
    std::cout << this->announce() << quotes[rand() % 5];
}

ScavTrap::ScavTrap(ScavTrap const & src) {
    *this = src;
}

ScavTrap::~ScavTrap(void) {
    std::string quotes[5] = {
        "FUS RO DA!",
        "Looks like Team Rocket is blasting off agaaaaain!",
        "Falcon Punch!.",
        "All your base are belong to us.",
        "I used to be an adventurer like you, but then I took an arrow to the knee."
    };
    std::cout << this->announce() << quotes[rand() % 5] << " <DIES>\n";
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs) {
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

int     ScavTrap::getHp(void) {
    return (this->_hp);
}

int     ScavTrap::getMaxHp(void) {
    return (this->_maxHp);
}

int     ScavTrap::getEp(void) {
    return (this->_ep);
}

int     ScavTrap::getMaxEp(void) {
    return (this->_maxEp);
}

std::string ScavTrap::announce(void) {
    std::string a = "SC4V-TP <" + this->_name + ">: ";
    return (a);
}

std::string ScavTrap::announceHp(void) {
    std::string a = std::to_string(this->_hp) + "/" + std::to_string(this->_maxHp) + "\n";
    return (a);
}

std::string ScavTrap::announceEp(void) {
    std::string a = std::to_string(this->_ep) + "/" + std::to_string(this->_maxEp) + "\n";
    return (a);
}

void    ScavTrap::rangedAttack(std::string const & target) {
    std::cout << this->announce() << "Does a ranged attack on <"
    << target << ">, causing <" << this->_rAtk << "> points of damage!\n";
}

void    ScavTrap::meleeAttack(std::string const & target) {
    std::cout << this->announce() << "Does a melee attack on <"
    << target << ">, causing <" << this->_mAtk << "> points of damage!\n";
}

void    ScavTrap::takeDamage(unsigned int amount) {
    int actual;

    actual = amount - this->_def;
    std::cout << this->announce() << "Receives <" << actual << "> damage!\n";
    this->_hp -= actual;
    if (this->_hp < 0)
        this->_hp = 0; // .dies() function?
}

void    ScavTrap::beRepaired(unsigned int amount) {
    this->_hp += amount;
    if (this->_hp > this->_maxHp)
        this->_hp = this->_maxHp;
    std::cout << this->announce() << "Repairs for <" << amount << "> health!\n"; 
}

void    ScavTrap::challengeNewcomer(std::string const & target) {
    std::string challenges[5] = {
        "Ice Bucket Challenge",
        "Mannequin Challenge",
        "Running Man Challenge",
        "Cinnamon Challenge",
        "Kylie Jenner Lip Challenge"
    };

    if (this->_ep < 25)
    {
        std::cout << this->announce() << "Not enough energy!\n";
        return;
    }
    this->_ep -= 25;
    std::cout << this->announce() << "Challenges <" << target
    << "> to do the <" << challenges[rand() % 5] << ">!\n";
}