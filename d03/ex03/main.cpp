#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

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
void    hp(NinjaTrap & x) {
    std::cout << x.announce() << "HP: " << x.announceHp();
}
void    ep(NinjaTrap & x) {
    std::cout << x.announce() << "EP: " << x.announceEp();
}

int main() {
    FragTrap x("Bob");
    ScavTrap y("Charlie");
    NinjaTrap z("James");
    NinjaTrap a("Jesse");

    std::srand(std::time(0));
    hp(z);
    z.takeDamage(39);
    hp(z);
    z.rangedAttack("Some Rando");
    z.meleeAttack("Some other rando");
    z.beRepaired(66);
    hp(z);
    ep(z);
    z.ninjaShoebox(a);
    ep(z);
    z.ninjaShoebox(x);
    ep(z);
    z.ninjaShoebox(y);
    ep(z);
    z.ninjaShoebox(z);
    ep(z);
    z.ninjaShoebox(z);
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

    return(0);
}