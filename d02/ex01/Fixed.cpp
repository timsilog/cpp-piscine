#include "Fixed.hpp"

Fixed::Fixed( void ) {
    std::cout << "Default constructor called\n";
    this->_n = 0;
    return;
}

Fixed::Fixed( int const i ) {
    std::cout << "Int constructor called\n";
    this->_n = i << this->_bits;
    return;
}

Fixed::Fixed( float const f ) {
    std::cout << "Float constructor called\n";
    this->_n = roundf(f * (1 << this->_bits));
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

float       Fixed::toFloat( void ) const {
    return ((float)this->getRawBits() / (1 << this->_bits));
}

int         Fixed::toInt( void ) const {
    return (this->getRawBits() >> this->_bits);
}

int         Fixed::getRawBits( void ) const {
    return (this->_n);
}

void        Fixed::setRawBits( int const raw ) {
    this->_n = raw;
    return;
}

std::ostream &  operator<<( std::ostream & o, Fixed const & rhs ) {
    o << rhs.toFloat();
    return (o);
}

const int     Fixed::_bits = 8;