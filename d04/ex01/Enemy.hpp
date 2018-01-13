#ifndef ENEMY_HPP
#define ENEMY_HPP
#include <string>
#include <iostream>

class Enemy
{
    private:
    protected:
        int             _hp;
        std::string     _type;
    public:
        Enemy(int hp, std::string const & type);
        Enemy(void);
        Enemy(Enemy const & src);
        virtual ~Enemy();
        Enemy &         operator=(Enemy const & rhs);
        std::string     getType() const;
        int             getHP() const;
        virtual void    takeDamage(int amount);
};

#endif