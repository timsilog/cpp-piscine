#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::string quotes[5] = {
        "The gates are open.\n",
        "LEEEROYY JEEEEENNKIIIIIIIINSS.\n",
        "MRGLGLRGLLGGLRLRGLL.\n",
        "You require my assistance?\n",
        "That belongs in a museum!\n"
    };

    std::srand(std::time(0));
    this->_hp = 100;
    this->_maxHp = 100;
    this->_ep = 50;
    this->_maxEp = 50;
    this->_lvl = 1;
    this->_mAtk = 20;
    this->_rAtk = 15;
    this->_def = 3;
    this->_type = "SC4V-TP";
    std::cout << this->announce() << quotes[rand() % 5];
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
    << " to do the <" << challenges[rand() % 5] << ">!\n";
}