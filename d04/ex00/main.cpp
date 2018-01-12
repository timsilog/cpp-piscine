#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Victim.hpp"
#include "Beggar.hpp"

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    Beggar sam("Sam");
    std::cout << robert << jim << joe << sam;
    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(sam);
    return 0;
}