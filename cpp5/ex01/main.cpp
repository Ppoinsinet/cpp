#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat moi("moi");
    try
    {
        std::cout << moi;
        moi.increase();
        std::cout << moi;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    Form form("mon formulaire");

    form.beSigned(moi);

    return (0);
}