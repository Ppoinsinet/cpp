#include <iostream>

class Fixed
{
private:
    int value;
    static const int bits = 8;
public:
    Fixed();
    Fixed(const Fixed& tmp);
    ~Fixed();
    Fixed &operator=(const Fixed& tmp);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};