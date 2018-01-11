#include "Fixed.hpp"

Fixed::Fixed( void ) {
    this->_n = 0;
    return;
}

Fixed::Fixed( int const i ) {
    this->_n = i << this->_bits;
    return;
}

Fixed::Fixed( float const f ) {
    this->_n = roundf(f * (1 << this->_bits));
    return;
}

Fixed::Fixed( Fixed const & src) {
    *this = src;
    return;
}

Fixed::~Fixed( void ) {
    return;
}

Fixed &     Fixed::operator=( Fixed const & rhs ) {

    if (this != &rhs)
        this->_n = rhs.getRawBits();
    return (*this);
}

Fixed       Fixed::operator+( Fixed const & rhs ) {
    Fixed   temp;

    temp.setRawBits(this->_n + rhs.getRawBits());
    return (temp);
}
Fixed       Fixed::operator-( Fixed const & rhs ) {
    Fixed   temp;

    temp.setRawBits(this->_n - rhs.getRawBits());
    return(temp);
}
Fixed       Fixed::operator/( Fixed const & rhs ) {
    Fixed   temp;

    temp.setRawBits((this->_n << this->_bits) / rhs._n);
    return (temp);
}
Fixed       Fixed::operator*( Fixed const & rhs ) {
    Fixed   temp;

    temp.setRawBits((this->_n * rhs.getRawBits()) >> this->_bits);
    return (temp);
}
bool        Fixed::operator<( Fixed const & rhs ) {
    if (this->_n < rhs.getRawBits())
        return (true);
    return (false);
}
bool        Fixed::operator>( Fixed const & rhs ) {
    if (this->_n > rhs.getRawBits())
        return (true);
    return (false);
}
bool        Fixed::operator==( Fixed const & rhs ) {
    if (this->_n == this->getRawBits())
        return (true);
    return (false);
}
bool        Fixed::operator<=( Fixed const & rhs ) {
    if (this->_n <= rhs.getRawBits())
        return (true);
    return (false);
}
bool        Fixed::operator>=( Fixed const & rhs ) {
    if (this->_n >= rhs.getRawBits())
        return (true);
    return (false);
}
bool        Fixed::operator!=( Fixed const & rhs ) {
    if (this->_n != rhs.getRawBits())
        return (true);
    return (false);
}
Fixed &     Fixed::operator++() {
    this->_n++;
    return (*this);
} //pre
Fixed       Fixed::operator++( int ) {
    Fixed temp = *this;
    this->_n++;
    return (temp);

} //post
Fixed &     Fixed::operator--() {
    this->_n--;
    return (*this);
} //pre
Fixed       Fixed::operator--( int ) {
    Fixed temp = *this;
    this->_n--;
    return (temp);
} //post

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

Fixed &         Fixed::min(Fixed & f1, Fixed & f2) {
    if (f1 < f2)
        return (f1);
    return (f2);
}
Fixed const &   Fixed::min(Fixed const & f1, Fixed const & f2) {
    if (f1.getRawBits() < f2.getRawBits())
        return (f1);
    return (f2);
}
Fixed &         Fixed::max(Fixed & f1, Fixed & f2) {
    if (f1 > f2)
        return (f1);
    return (f2);
}
Fixed const &   Fixed::max(Fixed const & f1, Fixed const & f2) {
    if (f1.getRawBits() > f2.getRawBits())
        return (f1);
    return (f2);
}

std::ostream &  operator<<( std::ostream & o, Fixed const & rhs ) {
    o << rhs.toFloat();
    return (o);
}

const int     Fixed::_bits = 8;