#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
    private:

    public:
        SuperTrap(void);
        SuperTrap(std::string name);
        SuperTrap(SuperTrap const & src);
        ~SuperTrap(void);

        // SuperTrap & operator=(SuperTrap const & rhs);
};

#endif