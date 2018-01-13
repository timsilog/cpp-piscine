#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
    private:
    public:
        SuperMutant(void);
        SuperMutant(SuperMutant const & src);
        ~SuperMutant();
        using Enemy::operator=;
        virtual void    takeDamage(int amount);
};

#endif