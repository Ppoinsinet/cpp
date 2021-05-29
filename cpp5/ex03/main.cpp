#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"

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
        std::cout << "yo" << std::endl;
    }
    try
    {    
        Intern esclave;
        Form *ptr = esclave.makeForm("presidential pardon", "mechant");
        std::cout << *ptr;
        moi.setGrade(1);
        ptr->beSigned(moi);
        moi.executeForm(*ptr);
        std::cout << *ptr;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}