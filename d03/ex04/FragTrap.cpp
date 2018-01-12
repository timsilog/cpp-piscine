#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
    std::string quotes[5] = {
        "Battlecruiser operational.\n",
        "Power overwhelming!\n",
        "READY TO ROLL OUT.\n",
        "My life for Aiur..\n",
        "SCV good to go, sir!\n"
    };
    this->_name = "default";
    this->_hp = 100;
    this->_maxHp = 100;
    this->_ep = 100;
    this->_maxEp = 100;
    this->_lvl = 1;
    this->_mAtk = 30;
    this->_rAtk = 20;
    this->_def = 5;
    this->_type = "FR4G-TP";
    std::cout << this->announce() << quotes[rand() % 5];
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::string quotes[5] = {
        "Battlecruiser operational.\n",
        "Power overwhelming!\n",
        "READY TO ROLL OUT.\n",
        "My life for Aiur..\n",
        "SCV good to go, sir!\n"
    };

    this->_name = name;
    this->_hp = 100;
    this->_maxHp = 100;
    this->_ep = 100;
    this->_maxEp = 100;
    this->_lvl = 1;
    this->_mAtk = 30;
    this->_rAtk = 20;
    this->_def = 5;
    this->_type = "FR4G-TP";
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