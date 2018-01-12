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
        ScavTrap(void);
        ScavTrap( std::string name );
        ScavTrap(ScavTrap const & src);
        ~ScavTrap ( void );
        using ClapTrap::operator=;
        void        challengeNewcomer(std::string const & target);
};

#endif