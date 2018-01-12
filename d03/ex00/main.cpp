#include "FragTrap.hpp"

void    hp(FragTrap & x) {
    std::cout << x.announce() << "HP: " << x.announceHp();
}
void    ep(FragTrap & x) {
    std::cout << x.announce() << "EP: " << x.announceEp();
}

int main() {
    FragTrap x("Brock");
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
    
    return(0);
}