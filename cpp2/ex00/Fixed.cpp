#include "Fixed.hpp"

Fixed::Fixed()
: value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& tmp)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = tmp;
}

Fixed::operator=(const Fixed& tmp)
{
    std::cout << "Assignation operator called" << std::endl;
    value = tmp.getRawBits();
    return (0);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    value = raw;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (value);
}