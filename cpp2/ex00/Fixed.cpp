#include "Fixed.hpp"

Fixed::Fixed()
: value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& tmp)
{
    std::cout << "Copy constructor called" << std::endl;
    value = tmp.getRawBits();
}

Fixed &Fixed::operator=(const Fixed& tmp)
{
    std::cout << "Assignation operator called" << std::endl;
    value = tmp.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
}

int Fixed::getRawBits(void) const
{
    return (value);
}