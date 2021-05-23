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
    void    changesColor(std::string newColor);
    void    changesGender(std::string newGender);
    void    getColor(void);
    void    getGender(void);
    Pony();
    ~Pony();
};

#endif