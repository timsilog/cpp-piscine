#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
#include <ctime>
#include <iostream>

class ClapTrap
{
    protected:
        std::string _name;
        int         _hp;
        int         _maxHp;
        int         _ep;
        int         _maxEp;
        int         _lvl;
        int         _mAtk;
        int         _rAtk;
        int         _def;
        std::string _type;
    public:
        ClapTrap( std::string name );
        ~ClapTrap ( void );
        ClapTrap & operator=(ClapTrap const & rhs);

        int         getHp(void);
        int         getMaxHp(void);
        int         getEp(void);
        int         getMaxEp(void);
        std::string announce(void);
        std::string announceHp(void);
        std::string announceEp(void);
        void        rangedAttack(std::string const & target);
        void        meleeAttack(std::string const & target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
};

#endif