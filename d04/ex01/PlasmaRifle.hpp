#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
    private:

    public:
        PlasmaRifle(void);
        PlasmaRifle(PlasmaRifle const & src);
        ~PlasmaRifle();
        using AWeapon::operator=;
        void            attack() const;
};

#endif