#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    srand(time(NULL));
    Bureaucrat moi("moi");
    
    try
    {    
        Intern esclave;
        Form *ptr = esclave.makeForm("unkown form", "mechant");
        std::cout << *ptr;
        moi.setGrade(1);
        ptr->beSigned(moi);
        std::cout << *ptr;
        moi.executeForm(*ptr);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception : " << e.what() << '\n';
    }

    try
    {    
        Intern esclave;
        Form *ptr = esclave.makeForm("robotomy request", "mechant");
        std::cout << *ptr;
        moi.setGrade(1);
        ptr->beSigned(moi);
        std::cout << *ptr;
        moi.executeForm(*ptr);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception : " << e.what() << '\n';
    }
    
    return (0);
}