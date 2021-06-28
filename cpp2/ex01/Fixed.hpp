#include <iostream>

class Fixed
{
private:
    int value;
    static const int bits = 8;
public:
    Fixed();
    Fixed(const Fixed& tmp);
    Fixed(const int newValue);
    Fixed(const float newValue);
    ~Fixed();
    Fixed& operator=(const Fixed& tmp);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    int toInt(void) const;
    float toFloat(void) const;

};

std::ostream& operator<<(std::ostream& stream, const Fixed& tmp);
