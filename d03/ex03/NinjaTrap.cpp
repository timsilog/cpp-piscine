#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {
    std::string quotes[4] = {
        "The eyes never lie.\n",
        "A demonstration of superior judgment.\n",
        "The unseen blade is the deadliest.\n",
        "As balance dictates\n",
    };

    this->_hp = 60;
    this->_maxHp = 60;
    this->_ep = 120;
    this->_maxEp = 120;
    this->_lvl = 1;
    this->_mAtk = 60;
    this->_rAtk = 5;
    this->_def = 0;
    this->_type = "N1NJ4-TP";
    std::cout << this->announce() << quotes[rand() % 4];
}

NinjaTrap::Ninjatrap(NinjaTrap const & src) {
    *this = src;
}

NinjaTrap::~NinjaTrap(void) {
    std::string quotes[4] = {
        "A silent death!",
        "So I go.",
        "Do not deny me.",
        "Understood.",
    };
    std::cout << this->announce() << quotes[rand() % 4] << " <DIES>\n";
}

void    NinjaTrap::doNothing(void) {
    std::cout << this->announce() << "does nothing..\n";
}

void    NinjaTrap::ninjaShoebox(NinjaTrap & t) {
    if (this->_ep < 25)
    {
        std::cout << this->announce() << "Not enough energy!\n";
        return;
    }
    this->_ep -= 25;
    std::cout <<this->announce() << "ACTIVATING <" << t.getName() << ">\n";
    t.doNothing();
}

void    NinjaTrap::ninjaShoebox(FragTrap & t) {
    if (this->_ep < 25)
    {
        std::cout << this->announce() << "Not enough energy!\n";
        return;
    }
    this->_ep -= 25;
    std::cout <<this->announce() << "ACTIVATING <" << t.getName() << ">\n";
    t.vaulthunter_dot_exe("the guy behind you");   
}

void    NinjaTrap::ninjaShoebox(ScavTrap & t) {
    if (this->_ep < 25)
    {
        std::cout << this->announce() << "Not enough energy!\n";
        return;
    }
    this->_ep -= 25;
    std::cout <<this->announce() << "ACTIVATING <" << t.getName() << ">\n";
    t.challengeNewcomer("the guy behind you");
}