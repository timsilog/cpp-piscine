/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 11:34:42 by tjose             #+#    #+#             */
/*   Updated: 2018/01/09 22:46:14 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie
{
	private:
		std::string		_name;
		std::string		_type;
	public:
		Zombie( void );
		~Zombie( void );
		void	announce( void ) const;
		void	setName(std::string name);
		void	setType(std::string type);
		void	setBoth(std::string name, std::string type);
};

# endif
