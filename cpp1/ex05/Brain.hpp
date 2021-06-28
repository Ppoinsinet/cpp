#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <sstream>

class Brain
{
private:
    int     _age;
public:
    Brain();
    ~Brain();
    std::string    identify(void) const;
    int            getAge(void) const;
};



#endif