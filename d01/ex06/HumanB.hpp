/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 22:48:41 by tjose             #+#    #+#             */
/*   Updated: 2018/01/09 22:48:41 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
    private:
        Weapon*     _weapon;
        std::string _name;
    public:
        HumanB(std::string name);
        void    attack( void ) const;
        void    setWeapon(Weapon& weapon);
};

#endif
