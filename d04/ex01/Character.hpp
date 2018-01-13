#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
    private:
    protected:
        std::string     _name;
        int             _ap;
        AWeapon*        _wpn;

    public:
        Character(std::string const & name);
        Character(void);
        Character(Character const & src);
        ~Character();
        Character & operator=(Character const & rhs);
        std::string getName() const;
        int         getAp() const;
        AWeapon*    getWpn() const;
        bool        hasWpn() const;
        void        recoverAP();
        void        equip(AWeapon* w);
        void        attack(Enemy* e);
};

std::ostream & operator<<(std::ostream & o, Character & rhs);


#endif