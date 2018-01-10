#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent( void ) {
    this->_type = "";
    std::srand(std::time(0));
    std::cout << "Zombie Event Initiated..\n";
}

ZombieEvent::~ZombieEvent( void ) {
    std::cout << "Zombie Event Over.\n";
}

void        ZombieEvent::setZombieType(std::string type) {
    this->_type = type;
    std::cout << "Setting Zombie type to: \"" << type << "\"\n";
}

Zombie*     ZombieEvent::newZombie(std::string name) {
    Zombie* temp = new Zombie(name, this->_type);
    temp->announce();
    return (temp);
}

void        ZombieEvent::randomChump( void ) {
    Zombie temp = Zombie(this->_names[std::rand() % 5], this->_type);
    temp.announce();
}

std::string ZombieEvent::_names[5] = {"Bob", "Charlie", "Mary", "Susan", "Jeff"};