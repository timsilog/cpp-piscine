#ifndef SORCERER_HPP
#define SORCERER_HPP
#include <string>
#include <iostream>
#include "Victim.hpp"

class Sorcerer 
{
    private:
        std::string _name;
        std::string _title;
        Sorcerer(void);

    protected:
    public:
        Sorcerer(std::string name, std::string title);
        Sorcerer(Sorcerer const & src);
        ~Sorcerer(void);
        Sorcerer & operator=(Sorcerer const & rhs);
        std::string getName(void);
        std::string getTitle(void);
        void        polymorph(Victim const & v) const;
};

std::ostream & operator<<(std::ostream & o, Sorcerer & rhs);

#endif