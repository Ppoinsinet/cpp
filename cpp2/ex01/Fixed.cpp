#include "Fixed.hpp"
#include <cmath>

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

Fixed::Fixed(const int newValue)
: value(newValue)
{
    std::cout << "Int constructor called\n";
    value = value << bits;
}

Fixed::Fixed(const float newValue)
{
    std::cout << "Float constructor called\n";
    float tmp = (float)newValue * (1 << bits);
    tmp = roundf(tmp);
    value = (int)tmp;
}

Fixed& Fixed::operator=(const Fixed& tmp)
{
    std::cout << "Assignation operator called" << std::endl;
    value = tmp.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
    return (((float)value / (1 << bits)));
}

int Fixed::toInt(void) const
{
    return ((int)roundf(value >> bits));
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
}

int Fixed::getRawBits(void) const
{
    return (value);
}

std::ostream& operator<<(std::ostream& stream, const Fixed& tmp)
{
    stream << tmp.toFloat();
    return (stream);
}