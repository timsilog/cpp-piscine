#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Character.hpp"
#include "AWeapon.hpp"

int main()
{
    Character* zaz = new Character("zaz");
    std::cout << *zaz;
    Enemy* b = new RadScorpion();
    Enemy* c = new SuperMutant();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();

    std::cout << std::endl;

    zaz->equip(pr);
    std::cout << *zaz;
    zaz->equip(pf);
    zaz->attack(b);
    std::cout << *zaz;
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    std::cout << "Rad Scorpion has HP: " << b->getHP() << std::endl;
    zaz->attack(b);
    std::cout << *zaz;

    std::cout << std::endl;

    zaz->recoverAP();
    zaz->recoverAP();
    zaz->recoverAP();
    std::cout << *zaz;
    zaz->attack(c);
    zaz->attack(c);
    zaz->attack(c);
    zaz->attack(c);
    zaz->attack(c);
    zaz->attack(c);
    zaz->attack(c);
    zaz->attack(c);
    zaz->attack(c);
    zaz->recoverAP();
    zaz->recoverAP();
    zaz->recoverAP();
    zaz->recoverAP();
    std::cout << *zaz; 
    zaz->attack(c);
    std::cout << "Super Mutant has HP: " << c->getHP() << std::endl;
    zaz->attack(c);

    std::cout << std::endl;
    delete zaz;
    delete pr;
    delete pf;
    return 0;
}