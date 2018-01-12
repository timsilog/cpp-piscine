#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <string>
#include <iostream>
#include <ctime>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
    public:
        ScavTrap( std::string name );
        ~ScavTrap ( void );
        ScavTrap & operator=(ScavTrap const & rhs);

        void        challengeNewcomer(std::string const & target);
};

#endif