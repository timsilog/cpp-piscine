/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 22:48:30 by tjose             #+#    #+#             */
/*   Updated: 2018/01/09 22:48:32 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
    private:
        Weapon&     _weapon;
        std::string _name;
    public:
        HumanA(std::string name, Weapon& weapon);
        void        attack( void ) const;

};

#endif
