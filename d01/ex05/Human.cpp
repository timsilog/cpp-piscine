/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 22:47:53 by tjose             #+#    #+#             */
/*   Updated: 2018/01/09 22:47:54 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Human.hpp"

Human::Human( void ) {
    this->_brain = new Brain();
    std::cout << "Human is born\n";
}

Human::~Human(void) {
    delete this->_brain;
    std::cout << "Human dies\n";
}

Brain const &       Human::getBrain( void ) const {
    return (*this->_brain);
}

std::string const   Human::identify( void ) const {
    return(this->_brain->identify());
}
