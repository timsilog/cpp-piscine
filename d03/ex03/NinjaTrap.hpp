#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
    private:
    public:
        NinjaTrap( std::string name );
        NinjaTrap(NinjaTrap const & src);
        ~NinjaTrap ( void );
        NinjaTrap & operator=(NinjaTrap const & rhs);

        void    ninjaShoebox(NinjaTrap & t);
        void    ninjaShoebox(FragTrap & t);
        void    ninjaShoebox(ScavTrap & t);
        void    doNothing(void);
};

#endif