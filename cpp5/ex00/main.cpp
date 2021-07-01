#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat moi("moi");
        std::cout << moi;
        moi.decrease();
        std::cout << moi;
        std::cout << "End of try 1 : grade is " << moi.getGrade() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Exception : " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat moi("moi");
        std::cout << moi;
        for (int i = 0; i < 150; i++)
            moi.increase();
        std::cout << moi;
        std::cout << "End of try 2 : grade is " << moi.getGrade() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception : " << e.what() << '\n';
    }
    
    std::cout << "End of program" << std::endl;
    return (0);
}