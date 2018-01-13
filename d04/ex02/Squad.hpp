#ifndef SQUAD_HPP
#define SQUAD_HPP
#include "ISquad.hpp"

class Squad : public ISquad
{
    private:
        ISpaceMarine** _team;
        int            _size;

    public:
        Squad();
        Squad(Squad const & src);
        ~Squad();

        Squad & operator=(Squad const & rhs);
        void        freeTeam();
        int getCount() const;
        ISpaceMarine* getUnit(int) const;
        int push(ISpaceMarine*);
};

#endif