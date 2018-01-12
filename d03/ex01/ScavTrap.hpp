#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <string>
#include <iostream>
#include <ctime>

class ScavTrap
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
        ScavTrap( std::string name );
        ~ScavTrap ( void );
        ScavTrap & operator=(ScavTrap const & rhs);

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
        void        challengeNewcomer(std::string const & target);
};

#endif