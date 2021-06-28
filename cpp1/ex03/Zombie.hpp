#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <stdlib.h>

class Zombie
{
private:
    std::string     _type;
    std::string     _name;
public:
    Zombie();
    Zombie(std::string type, std::string name);
    std::string &getName(void);
    std::string &getType(void);
    ~Zombie();
    void    announce(void);
};

#endif