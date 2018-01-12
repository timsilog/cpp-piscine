#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
    public:
        ScavTrap(void);
        ScavTrap( std::string name );
        ScavTrap(ScavTrap const & src);
        ~ScavTrap ( void );
        // ScavTrap & operator=(ScavTrap const & rhs);

        void        challengeNewcomer(std::string const & target);
};

#endif