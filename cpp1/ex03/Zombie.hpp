#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
private:
    std::string     _type;
    std::string     _name;
public:
    void    announce(void);
    Zombie();
    Zombie(std::string type, std::string name);
    ~Zombie();
};

#endif