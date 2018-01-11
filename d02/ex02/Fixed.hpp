#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int                 _n;
        static int const    _bits;
    public:
        Fixed( void );
        Fixed( int const i );
        Fixed( float const f );
        Fixed( Fixed const & src );
        ~Fixed( void );

        Fixed & operator=( Fixed const & rhs );
        Fixed   operator+( Fixed const & rhs );
        Fixed   operator-( Fixed const & rhs );
        Fixed   operator/( Fixed const & rhs );
        Fixed   operator*( Fixed const & rhs );
        bool    operator<( Fixed const & rhs );
        bool    operator>( Fixed const & rhs );
        bool    operator==( Fixed const & rhs );
        bool    operator<=( Fixed const & rhs );
        bool    operator>=( Fixed const & rhs );
        bool    operator!=( Fixed const & rhs );
        Fixed & operator++(); //pre
        Fixed operator++( int ); //post
        Fixed & operator--(); //pre
        Fixed operator--( int ); //post



        int     getRawBits( void ) const; //returns the raw value of the fixed point value.
        void    setRawBits( int const raw ); //sets the raw value of the fixed point value.
        float   toFloat( void ) const;
        int     toInt( void ) const;

        static Fixed &         min(Fixed & f1, Fixed & f2);
        static Fixed const &   min(Fixed const & f1, Fixed const & f2);
        static Fixed &         max(Fixed & f1, Fixed & f2);
        static Fixed const &   max(Fixed const & f1, Fixed const & f2);
};

std::ostream &  operator<<( std::ostream & o, Fixed const & rhs );



#endif