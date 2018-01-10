#include "Fixed.hpp"

Fixed::Fixed( void ) {
    std::cout << "Default constructor called\n";
    this->_n = 0;
    return;
}

Fixed::Fixed( Fixed const & src) {
    std::cout << "Copy constructor called\n";
    *this = src;
    return;
}

Fixed::~Fixed( void ) {
    std::cout << "Destructor called\n";
    return;
}

Fixed &     Fixed::operator=( Fixed const & rhs ) {
    std::cout << "Assignation operator called\n";

    if (this != &rhs)
        this->_n = rhs.getRawBits();
    return (*this);
}

int         Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called\n";
    return (this->_n);
}

void        Fixed::setRawBits( int const raw ) {
    std::cout << "setRawBits member function called\n";
    this->_n = raw;
    return;
}

const int     Fixed::_ate = 8;