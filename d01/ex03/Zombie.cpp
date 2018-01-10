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

Zombie::Zombie( void ) {
	this->_name = "";
	this->_type = "";
}

Zombie::~Zombie( void ) {
	std::cout << this->_name << " dies..\n";
}

void	Zombie::setName(std::string name) {
	this->_name = name;
}

void	Zombie::setType(std::string type) {
	this->_type = type;
}

void	Zombie::setBoth(std::string name, std::string type) {
	this->setName(name);
	this->setType(type);
}

void	Zombie::announce( void ) const {
	std::cout << "<" << this->_name << "(" << this->_type << ")> Braiiiiiinnnssss...\n";
}