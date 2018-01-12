#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <string>
#include <iostream>
#include <ctime>

class FragTrap
{
    private:
        std::string _name;
        int         _hp;
        int         _maxHp;
        int         _ep;
        int         _maxEp;
        int         _lvl;
        int         _mAtk;
        int         _rAtk;
        int         _def;

    public:
        FragTrap(void);
        FragTrap( std::string name );
        FragTrap(FragTrap const & src);
        ~FragTrap ( void );
        FragTrap & operator=(FragTrap const & rhs);

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
        void        vaulthunter_dot_exe(std::string const & target);
};

#endif