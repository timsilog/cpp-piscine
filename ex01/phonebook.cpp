/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 20:30:53 by tjose             #+#    #+#             */
/*   Updated: 2018/01/08 14:46:56 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <string>
#include "Contact.class.hpp"

int	get_index(Contact book[8])
{
	int i;

	i = 0;
	while (book[i].exists)
		i++;
	return (i);
}

int main()
{
	Contact		book[8];
	std::string input;
	int			k;
	int			i;

	while (1)
	{
		std::cout << "Enter a command: ";
		std::cin >> input;
		if (input == "EXIT")
			break ;
		else if (input == "ADD")
		{
			if ((i = get_index(book)) > 7)
			{
				std::cout << "The phonebook is full!\n";
				continue ;
			}
			book[i].exists = true;
			std::cout << "Lets add a new contact to our book!\nPlease enter the following.\nLast Name:";
			std::cin >> book[i].lastname;
			std::cout << "First Name:";
			std::cin >> book[i].firstname;
			std::cout << "Nickname:";
			std::cin >> book[i].nickname;
			std::cout << "Login:";
			std::cin >> book[i].login;
			std::cout << "Postal Address:";
			std::cin >> book[i].address;
			std::cout << "Email Address:";
			std::cin >> book[i].email;
			std::cout << "Phone Number:";
			std::cin >> book[i].phone;
			std::cout << "Birth Date:";
			std::cin >> book[i].birthday;
			std::cout << "Favorite Meal:";
			std::cin >> book[i].meal;
			std::cout << "Underwear Color:";
			std::cin >> book[i].underwear;
			std::cout << "Darkest Secret:";
			std::cin >> book[i].secret;
			std::cout << "Contact added!\n";
		}
		else if (input == "SEARCH")
		{
			std::cout << "Contacts:\nIndex     |FirstName |LastName  |Nickname\n";
			for (int j = 0; j < 8; j++)
			{
				std::cout << std::left << std::setw(10) << j << "|";
				if (book[j].firstname.length() > 9)
					std::cout << book[j].firstname.substr(0, 9) << ".|";
				else
					std::cout << std::left << std::setw(10) << book[j].firstname << "|";
				if (book[j].lastname.length() > 9)
					std::cout << book[j].lastname.substr(0, 9) << ".|";
				else
					std::cout << std::left << std::setw(10) << book[j].lastname << "|";
				if (book[j].nickname.length() > 9)
					std::cout << book[j].lastname.substr(0, 9) << "." << std::endl;
				else
					std::cout << std::left << std::setw(10) << book[j].nickname << std::endl;
			}
			std::cout << "Select an Index:";
			std::cin >> k;
			if (std::cin.fail())
			{
				std::cout << "That wasn't an integer!\n";
				std::cin.clear();
				std::cin.ignore();
				continue ;
			}
			if (book[k].exists)
			{
				std::cout << "Last Name: " << book[k].lastname
				<< "\nFirst Name: " << book[k].firstname
				<< "\nNickname: " << book[k].nickname
				<< "\nLogin: " << book[k].login
				<< "\nPostal Address: " << book[k].address
				<< "\nEmail: " << book[k].email
				<< "\nPhone Number: " << book[k].phone
				<< "\nBirth Date: " << book[k].birthday
				<< "\nFavorite Meal: " << book[k].meal
				<< "\nUnderwear Color: " << book[k].underwear
				<< "\nDarkest Secret: " << book[k].secret << std::endl;
			}
			else
				std::cout << "No contact exists at that index" << std::endl;
		}
		else
			std::cout << "I didn't understand that command!" << std::endl;
	}
}
