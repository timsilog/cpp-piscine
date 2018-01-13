#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    
    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    vlc->push(bob);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }

    std::cout << std::endl;
    ISpaceMarine* jess = new TacticalMarine;
    Squad* other = new Squad;
    other->push(jess);
    std::cout << "Copying squad onto stack\n";
    Squad check(*other);
    ISpaceMarine* tmp = check.getUnit(0);
    tmp->battleCry();

    std::cout << "\nDeleting squads on the heap\n";
    delete other;
    delete vlc;
    std::cout << "Deleting squad on the stack\n";
    return 0;
}