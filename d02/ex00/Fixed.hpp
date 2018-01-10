#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
    private:
        int                 _n;
        static int const    _ate;
    public:
        Fixed( void );
        Fixed( Fixed const & src );
        ~Fixed( void );

        Fixed & operator=( Fixed const & rhs );

        int     getRawBits( void ) const; //returns the raw value of the fixed point value.
        void    setRawBits( int const raw ); //sets the raw value of the fixed point value.

};

#endif