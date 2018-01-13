#ifndef AWEAPON_HPP
#define AWEAPON_HPP
#include <string>
#include <iostream>

class AWeapon
{
    protected:
        std::string     _name;
        int             _apCost;
        int             _dmg;

    public:
        AWeapon(std::string const & name, int apcost, int damage);
        AWeapon(void);
        AWeapon(AWeapon const & src);
        virtual ~AWeapon();
        AWeapon &       operator=(AWeapon const & rhs);
        std::string     getName() const;
        int             getAPCost() const;
        int             getDamage() const;
        virtual void    attack() const = 0;
};

#endif