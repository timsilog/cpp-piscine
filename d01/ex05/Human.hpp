#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"

class Human
{
    private:
        Brain*      _brain;
    public:
        Human(void);
        ~Human(void);
        Brain const &       getBrain(void) const;
        std::string const   identify(void) const;
};

#endif