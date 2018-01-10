/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 22:47:02 by tjose             #+#    #+#             */
/*   Updated: 2018/01/09 22:47:10 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include <string>
# include <iostream>
# include <cstdlib>
# include <ctime>
# include "Zombie.hpp"

class ZombieHorde
{
	private:
		std::string			_type;
        static std::string	_names[10];
		Zombie*				_zombies;
		int					_numZombies;

	public:
		ZombieHorde( int n );
		~ZombieHorde( void );
		void	announce( void ) const;
		void	setZombieType(std::string type);
};

#endif
