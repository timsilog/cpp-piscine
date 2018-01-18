#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <string>
#include <iostream>

class AMateria
{
    private:
        std::string     _type;
        unsigned int    xp_;
    public:
        AMateria(std::string const & type);
        AMateria(AMateria const & src);
        virtual ~AMateria();
        AMateria & operator=(AMateria const & rhs);
        std::string const & getType() const; //Returns the materia type
        unsigned int getXP() const; //Returns the Materia's XP
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif