/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 22:47:34 by tjose             #+#    #+#             */
/*   Updated: 2018/01/09 22:47:35 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

int main ( void )
{
    std::string     s = "HI THIS IS BRAIN";
    std::string*    p = &s;
    std::string&    r = s;
    std::cout << "string contains: "
    << s
    << "\npointer contains: "
    << *p
    << "\nreference contains: "
    << r
    << std::endl;
}
