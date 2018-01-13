#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
    private:
    public:
        RadScorpion(void);
        RadScorpion(RadScorpion const & src);
        ~RadScorpion();
        using Enemy::operator=;
        virtual void    takeDamage(int amount);
};

#endif