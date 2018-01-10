/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 12:11:26 by tjose             #+#    #+#             */
/*   Updated: 2018/01/09 22:46:38 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>

int main(void)
{
	ZombieEvent* event = new ZombieEvent();

	event->setZombieType("filthy");
	Zombie* brandon = event->newZombie("Brandon");
	std::cout << "I will create 5 random chumps..\n";
	for (int i = 0; i < 5; i++)
	{
		event->randomChump();
	}
	std::cout << "Changing type..\n";
	event->setZombieType("beautiful");
	Zombie* blake = event->newZombie("Blake");
	delete brandon;
	delete blake;
	delete event;
}
