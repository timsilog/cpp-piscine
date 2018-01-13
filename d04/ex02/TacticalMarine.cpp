#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {
    std::cout << "Tactical Marine ready for battle.\n";
}

TacticalMarine::TacticalMarine(TacticalMarine const & src) {
    *this = src;
}

TacticalMarine::~TacticalMarine() {
    std::cout << "Aaargh ...\n";
}

TacticalMarine & TacticalMarine::operator=(TacticalMarine const & rhs) {
    (void)rhs;
    return (*this);
}

TacticalMarine * TacticalMarine::clone() const {
    TacticalMarine * temp = new TacticalMarine(*this);
    return (temp);
}

void            TacticalMarine::battleCry() const {
    std::cout << "For the holy PLOT !\n";
}

void            TacticalMarine::rangedAttack() const {
    std::cout << "* attacks with bolter *\n";
}

void            TacticalMarine::meleeAttack() const {
    std::cout << "* attacks with chainsword *\n";
}