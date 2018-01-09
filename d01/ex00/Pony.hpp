/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 10:48:11 by tjose             #+#    #+#             */
/*   Updated: 2017/07/05 11:11:28 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
# include <string>

class Pony
{
	private:
		std::string _str;
	public:
		std::string color;
		Pony(std::string str, std::string color);
		~Pony();
};

#endif