#include "Form.hpp"
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
: Form("robotomy request", 72, 45)
{
}

void RobotomyRequestForm::execute(Bureaucrat const& executor)
{
    if (!isSigned())
        return ;
    std::cout << "* vrrrrrrrrrrrrrrr * " <<
    getTarget() << " was robotomized in 50" << std::endl;
}