#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void    hp(FragTrap & x) {
    std::cout << x.announce() << "HP: " << x.announceHp();
}
void    ep(FragTrap & x) {
    std::cout << x.announce() << "EP: " << x.announceEp();
}
void    hp(ScavTrap & x) {
    std::cout << x.announce() << "HP: " << x.announceHp();
}
void    ep(ScavTrap & x) {
    std::cout << x.announce() << "EP: " << x.announceEp();
}

int main() {
    FragTrap x("Bob");
    ScavTrap y("Charlie");
    hp(x);
    x.takeDamage(29);
    hp(x);
    x.rangedAttack("Some Rando");
    x.meleeAttack("Some other rando");
    x.beRepaired(10);
    hp(x);
    ep(x);
    x.vaulthunter_dot_exe("ORC");
    ep(x);
    x.vaulthunter_dot_exe("ELF");
    ep(x);
    x.vaulthunter_dot_exe("DRAGON");
    ep(x);
    x.vaulthunter_dot_exe("GNOME");
    ep(x);
    x.vaulthunter_dot_exe("DRYAD");
    ep(x);
    hp(y);
    y.takeDamage(76);
    hp(y);
    y.rangedAttack("Gaetan");
    y.meleeAttack("Kwame");
    y.beRepaired(16);
    hp(y);
    ep(y);
    y.challengeNewcomer("UNICORN");
    ep(y);
    y.challengeNewcomer("CENTAUR");
    ep(y);
    y.challengeNewcomer("SIREN");
    ep(y);
    
    return(0);
}