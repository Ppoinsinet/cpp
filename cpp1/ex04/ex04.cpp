#include <string>
#include <iostream>

int main()
{
    std::string tmp = "HI THIS IS BRAIN";
    std::string *ptr = &tmp;
    std::string &ref = tmp;
    std::cout << *ptr << std::endl;
    std::cout << ref << std::endl;
    return (0);
}