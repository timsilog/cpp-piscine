/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 22:46:30 by tjose             #+#    #+#             */
/*   Updated: 2018/01/09 22:46:32 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include <string>
# include "Zombie.hpp"
# include <string>
# include <iostream>
# include <cstdlib>
# include <ctime>
class ZombieEvent
{
	private:
		std::string				_type;
		static std::string		_names[5];

	public:
		ZombieEvent( void );
		~ZombieEvent( void );

		void	setZombieType(std::string type);
        Zombie* newZombie(std::string name); // create a Zombie with the chosen type, name it, and return it.
		void	randomChump( void ); // create a Zombie with a random name, and make it announce itself
};

# endif
