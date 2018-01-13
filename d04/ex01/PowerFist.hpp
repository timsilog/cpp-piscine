#ifndef POWERFIST_HPP
#define POWERFIST_HPP
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
    private:

    public:
        PowerFist(void);
        PowerFist(PowerFist const & src);
        ~PowerFist();
        using AWeapon::operator=;
        void            attack() const;
};

#endif