#ifndef PONY_HPP
# define PONY_HPP
# include <string>
# include <iostream>

class Pony
{
private:
    std::string _color;
    std::string _gender;
public:
    void    setColor(std::string newColor);
    void    setGender(std::string newGender);
    std::string    getColor(void);
    std::string    getGender(void);
    Pony();
    ~Pony();
};

#endif
