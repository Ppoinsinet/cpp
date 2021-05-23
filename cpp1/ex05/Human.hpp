#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human
{
private:
    Brain       brain;
public:
    std::string identify(void);
    Brain&       getBrain(void);
    Human();
    ~Human();
};


#endif