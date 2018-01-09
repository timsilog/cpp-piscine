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
	std::string	searched_index;
	int			i;
	int			current_index = 0;

	while (1)
	{
		std::cout << "Enter a command: ";
		std::getline (std::cin, input);
		if (input == "EXIT")
			break ;
		else if (input == "ADD")
		{
			if (current_index > 7)
			{
				std::cout << "The phonebook is full!\n";
				continue ;
			}
			std::cout << "Lets add a new contact to our book!\nPlease enter the following.\nLast Name: ";
			std::getline (std::cin, book[current_index].lastname);
			std::cout << "First Name: ";
			std::getline (std::cin, book[current_index].firstname);
			std::cout << "Nickname: ";
			std::getline (std::cin, book[current_index].nickname);
			std::cout << "Login: ";
			std::getline (std::cin, book[current_index].login);
			std::cout << "Postal Address: ";
			std::getline (std::cin, book[current_index].address);
			std::cout << "Email Address: ";
			std::getline (std::cin, book[current_index].email);
			std::cout << "Phone Number: ";
			std::getline (std::cin, book[current_index].phone);
			std::cout << "Birth Date: ";
			std::getline (std::cin, book[current_index].birthday);
			std::cout << "Favorite Meal: ";
			std::getline (std::cin, book[current_index].meal);
			std::cout << "Underwear Color: ";
			std::getline (std::cin, book[current_index].underwear);
			std::cout << "Darkest Secret: ";
			std::getline (std::cin, book[current_index].secret);
			std::cout << "Contact added!\n";
			book[current_index].exists = true;
			current_index++;
		}
		else if (input == "SEARCH")
		{
			std::cout << "Contacts:\n     Index| FirstName|  LastName|  Nickname\n";
			for (int j = 0; book[j].exists; j++)
			{
				std::cout << std::setw(10) << j << "|";
				if (book[j].firstname.length() > 10)
					std::cout << book[j].firstname.substr(0, 9) << ".|";
				else
					std::cout << std::setw(10) << book[j].firstname << "|";
				if (book[j].lastname.length() > 10)
					std::cout << book[j].lastname.substr(0, 9) << ".|";
				else
					std::cout << std::setw(10) << book[j].lastname << "|";
				if (book[j].nickname.length() > 10)
					std::cout << book[j].nickname.substr(0, 9) << "." << std::endl;
				else
					std::cout << std::setw(10) << book[j].nickname << std::endl;
			}
			std::cout << "Select an Index: ";
			std::getline (std::cin, searched_index);
			if (searched_index.length() > 1 || searched_index[0] < '0' || searched_index[0] > '7')
			{
				std::cout << "Nothing at that index!\n";
				continue ;
			}
			i = searched_index[0] - '0';
			if (book[i].exists)
			{
				std::cout << "Last Name: " << book[i].lastname
				<< "\nFirst Name: " << book[i].firstname
				<< "\nNickname: " << book[i].nickname
				<< "\nLogin: " << book[i].login
				<< "\nPostal Address: " << book[i].address
				<< "\nEmail: " << book[i].email
				<< "\nPhone Number: " << book[i].phone
				<< "\nBirth Date: " << book[i].birthday
				<< "\nFavorite Meal: " << book[i].meal
				<< "\nUnderwear Color: " << book[i].underwear
				<< "\nDarkest Secret: " << book[i].secret << std::endl;
			}
			else
				std::cout << "Nothing at that index!\n";
		}
		else
			std::cout << "I didn't understand that command!" << std::endl;
	}
}
