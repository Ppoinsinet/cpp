#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat moi("moi");
        std::cout << moi;
        moi.decrease();
        std::cout << moi;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}