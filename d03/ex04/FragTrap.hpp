#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    private:
    public:
        FragTrap(void);
        FragTrap( std::string name );
        FragTrap(FragTrap const & src);
        ~FragTrap ( void );
        using ClapTrap::operator=;
        void        vaulthunter_dot_exe(std::string const & target);
};

#endif