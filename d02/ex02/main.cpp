#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const f(12.1f);
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed c(5.05f);
    Fixed d(2);
    Fixed e(1.3f);
    Fixed g(6323);

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;


    std::cout << Fixed::max( c, f ) << std::endl;
    return 0;
}