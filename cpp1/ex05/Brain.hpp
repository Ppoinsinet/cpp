#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <sstream>

class Brain
{
private:
    int     age;
public:
    std::string    identify(void);
    int            getAge(void);
    Brain();
    ~Brain();
};



#endif