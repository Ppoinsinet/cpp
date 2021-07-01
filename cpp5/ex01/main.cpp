#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat moi("moi");
    try
    {
        std::cout << moi;
        moi.decrease();
        std::cout << moi;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    Form form("mon formulaire", 50, 1);

    std::cout << form;

    moi.signForm(form);
    moi.setGrade(1);
    moi.signForm(form);
    std::cout << form;

    return (0);
}