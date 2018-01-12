#ifndef VICTIM_HPP
#define VICTIM_HPP
#include <string>
#include <iostream>

class Victim
{
    private:
        std::string _name;
    protected:
        Victim(void);
    public:
        Victim(std::string name);
        Victim(Victim const & src);
        ~Victim(void);
        Victim & operator=(Victim const & rhs);
        std::string     getName();
        virtual void    getPolymorphed(void) const;
};

std::ostream & operator<<(std::ostream & o, Victim & rhs);


#endif