#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) : FragTrap(), NinjaTrap() {
    std::string quotes[4] = {
        "I am the prince of all Saiyans!\n",
        "With great power comes great responsibility.\n",
        "Omae Wa Mou Shindeiru.\n",
        "IT'S CLOBBERING TIME!\n",
    };
    this->_name = "default";
    this->_hp = 100;
    this->_maxHp = 100;
    this->_ep = 120;
    this->_maxEp = 120;
    this->_lvl = 1;
    this->_mAtk = 60;
    this->_rAtk = 20;
    this->_def = 5;
    this->_type = "SUP3R-TP";
    std::cout << this->announce() << quotes[rand() % 4];
}

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap(name) {
    std::string quotes[4] = {
        "I am the prince of all Saiyans!\n",
        "With great power comes great responsibility.\n",
        "Omae Wa Mou Shindeiru.\n",
        "IT'S CLOBBERING TIME!\n",
    };
    
    this->_name = name;
    this->_hp = 100;
    this->_maxHp = 100;
    this->_ep = 120;
    this->_maxEp = 120;
    this->_lvl = 1;
    this->_mAtk = 60;
    this->_rAtk = 20;
    this->_def = 5;
    this->_type = "SUP3R-TP";
    std::cout << this->announce() << quotes[rand() % 4];
}

SuperTrap::SuperTrap(SuperTrap const & src) {
    *this = src;
}

SuperTrap::~SuperTrap(void) {
        std::string quotes[4] = {
        "See You Space Cowboy.\n",
        "Like tears.. In rain..\n",
        "I'll never let go, Jack! I'll never let go!\n",
        "Why so serious?\n",
    };
    std::cout << this->announce() << quotes[rand() % 4] << " <DIES>\n";
}

// CHANGE THESE TO MATCH FRAG AND NINJA IF THEY WERE UNIQUE
// void    SuperTrap::rangedAttack(std::string const & target) {
//     std::cout << this->announce() << "Does a ranged attack on <"
//     << target << ">, causing <" << this->_rAtk << "> points of damage!\n";
// }

// void    SuperTrap::meleeAttack(std::string const & target) {
//     std::cout << this->announce() << "Does a melee attack on <"
//     << target << ">, causing <" << this->_mAtk << "> points of damage!\n";
// }