/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 22:48:46 by tjose             #+#    #+#             */
/*   Updated: 2018/01/09 22:48:47 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(std::string type) {
    this->_type = type;
}

void                Weapon::setType( std::string type ) {
    this->_type = type;
}

std::string const & Weapon::getType( void ) const {
    return (this->_type);
}
