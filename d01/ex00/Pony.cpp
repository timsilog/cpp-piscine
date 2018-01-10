/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 10:52:05 by tjose             #+#    #+#             */
/*   Updated: 2018/01/09 22:45:22 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string str, std::string color) : _str(str), _color(color)
{
	std::cout << "Pony was made" << this->_str << std::endl;
	return ;
}

Pony::~Pony(void)
{
	std::cout << "Pony" << this->_str << "was deleted\n";
	return ;
}
<<<<<<< HEAD

std::string	Pony::getColor( void ) {
	return (this->_color);
}
=======
>>>>>>> c2c4c31c920ae3dec72a0ff83a57654685059d7c
