/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 10:54:40 by tjose             #+#    #+#             */
/*   Updated: 2018/01/09 22:45:36 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Pony.hpp"

Pony	ponyonthestack(std::string str, std::string color)
{
	Pony temp = Pony(str, color);
	return (temp);
}

Pony*	ponyontheheap(std::string str, std::string color)
{
	Pony* temp = new Pony(str, color);
	return (temp);
}

int		main(void)
{
	Pony s = ponyonthestack(" on the stack ", "green");
	Pony* h = ponyontheheap(" on the heap ", "blue");
	std::cout << "Pony on the stack is " << s.getColor() << std::endl;
	std::cout << "Pony on the heap is " << h->getColor() << std::endl;
	delete h;
}
