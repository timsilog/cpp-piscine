/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 22:46:19 by tjose             #+#    #+#             */
/*   Updated: 2018/01/09 22:46:24 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    Zombie* temp = new Zombie();
    temp->setBoth(name, this->_type);
    temp->announce();
    return (temp);
}

void        ZombieEvent::randomChump( void ) {
    Zombie temp = Zombie();
    temp.setBoth(this->_names[std::rand() % 5], this->_type);
    temp.announce();
}

std::string ZombieEvent::_names[5] = {"Bob", "Charlie", "Mary", "Susan", "Jeff"};
