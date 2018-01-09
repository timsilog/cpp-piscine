/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 20:21:39 by tjose             #+#    #+#             */
/*   Updated: 2018/01/08 23:35:25 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Contact
{
	public:
		bool exists;
		std::string lastname;
		std::string firstname;
		std::string nickname;
		std::string login;
		std::string address;
		std::string email;
		std::string phone;
		std::string birthday;
		std::string meal;
		std::string underwear;
		std::string secret;
};
