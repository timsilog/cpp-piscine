#ifndef BEGGAR_HPP
#define BEGGAR_HPP
#include <string>
#include <iostream>
#include "Victim.hpp"

class Beggar : public Victim
{
    private:
        std::string _name;
        Beggar(void);
    public:
        Beggar(std::string name);
        ~Beggar(void);
        void    getPolymorphed(void) const;
};

#endif