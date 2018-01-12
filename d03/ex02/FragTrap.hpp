#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
    public:
        FragTrap( std::string name );
        FragTrap(FragTrap const & src);
        ~FragTrap ( void );
        FragTrap & operator=(FragTrap const & rhs);

        void        vaulthunter_dot_exe(std::string const & target);
};

#endif