#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>
# include <iostream>

class Weapon
{
    private:
        std::string         _type;
    public:
        Weapon(std::string type);
        void                setType( std::string type );
        std::string const & getType( void ) const;
};

#endif