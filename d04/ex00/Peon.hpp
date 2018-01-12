#ifndef PEON_HPP
#define PEON_HPP
#include <string>
#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
    private:
        std::string _name;
        Peon(void);
    public:
        Peon(std::string name);
        ~Peon(void);
        void    getPolymorphed(void) const;
};

#endif