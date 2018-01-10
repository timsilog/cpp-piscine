/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 22:48:51 by tjose             #+#    #+#             */
/*   Updated: 2018/01/09 22:48:51 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>
# include <iostream>

class Weapon
{
    private:
        std::string         _type;
    public:
        Weapon(std::string type);
        void                setType( std::string type );
        std::string const & getType( void ) const;
};

#endif
