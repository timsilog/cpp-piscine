/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 22:47:49 by tjose             #+#    #+#             */
/*   Updated: 2018/01/09 22:47:50 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <iostream>
# include <sstream>

class Brain
{
    private:
    public:
        Brain( void );
        ~Brain( void );
        std::string const   identify( void ) const;
};

#endif
