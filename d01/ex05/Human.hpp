/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 22:47:57 by tjose             #+#    #+#             */
/*   Updated: 2018/01/09 22:48:04 by tjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"

class Human
{
    private:
        Brain*      _brain;
    public:
        Human(void);
        ~Human(void);
        Brain const &       getBrain(void) const;
        std::string const   identify(void) const;
};

#endif
