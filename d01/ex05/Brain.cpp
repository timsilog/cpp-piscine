/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 22:47:45 by tjose             #+#    #+#             */
/*   Updated: 2018/01/09 22:47:45 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain( void ) {
    std::cout << "brain is born\n";
}

Brain::~Brain( void ) {
    std::cout << "brain is dead\n";
} 

std::string const   Brain::identify( void ) const {
    std::stringstream ss;
    ss << this;
    return ss.str();
}
