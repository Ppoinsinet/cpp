#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    srand(time(NULL));
    Bureaucrat moi("moi");
    
    Intern esclave;
    std::cout << "makeForm(\"unknown\") : ";
    esclave.makeForm("unknown", "mechant");
    std::cout << std::endl;

    try
    {    
        Intern esclave;
        Form *ptr = esclave.makeForm("shrubbery creation", "mechant");
        std::cout << *ptr;
        moi.setGrade(1);
        ptr->beSigned(moi);
        std::cout << *ptr;
        moi.executeForm(*ptr);
        std::cout << "Form shrubbery was executed\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception : " << e.what() << '\n';
    }
    
    return (0);
}