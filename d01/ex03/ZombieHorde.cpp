/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 22:46:54 by tjose             #+#    #+#             */
/*   Updated: 2018/01/09 22:46:57 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde( int n ) {
    std::cout << "Zombie Horde approaches..\n";
    this->_type = "smelly";
    this->_zombies = new Zombie[n];
    this->_numZombies = n;
    std::srand(std::time(0));
    for (int i = 0; i < n; i++)
        this->_zombies[i].setBoth(this->_names[rand() % 10], this->_type);
}

ZombieHorde::~ZombieHorde( void ) {
    std::cout << "The Zombie Horde fades away..\n";
    delete[] this->_zombies;
}

void    ZombieHorde::announce( void ) const {
    for (int i = 0; i < this->_numZombies; i++)
        this->_zombies[i].announce();
}

std::string ZombieHorde::_names[10] = {"Bob", "Charlie", "Mary", "Susan", "Jeff", "Cindy", "Jake", "Mark", "Chris", "Mandy"};
