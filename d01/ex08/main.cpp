/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 22:50:08 by tjose             #+#    #+#             */
/*   Updated: 2018/01/09 22:50:09 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Human.hpp"

int main()
{
    std::string input;
    std::string target;

    std::cout << "Enter action (\"meleeAttack\", \"rangedAttack\", or \"intimidatingShout\"): ";
    std::cin >> input;
    std::cout << "Enter name of target: ";
    std::cin >> target;
    Human* bob = new Human();
    bob->action(input, target);
    delete bob;
}
