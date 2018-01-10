/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 12:08:19 by tjose             #+#    #+#             */
/*   Updated: 2017/07/05 12:11:08 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type){}

Zombie::~Zombie( void ) {
	std::cout << this->_name << " dies..\n";
}

void	Zombie::announce( void ) {
	std::cout << "<" << this->_name << "(" << this->_type << ")> Braiiiiiinnnssss...\n";
}