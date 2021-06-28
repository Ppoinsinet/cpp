#include "Form.hpp"
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
: Form("RobotomyRequest", 72, 45)
{ setTarget("NoTarget"); }

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: Form("RobotomyRequest", 72, 45)
{ setTarget(target); }

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &tmp)
: Form("RobotomyRequest", 72, 45)
{ setTarget(tmp.getTarget()); setSign(tmp.isSigned()); }

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &tmp)
{ setTarget(tmp.getTarget()); setSign(tmp.isSigned()); return *this; }

void RobotomyRequestForm::executeForm(void) const
{
    if (rand() % 2 == 0)
        std::cout << "* vrrrrrrrrrrrrrrr * " << getTarget() << " was robotomized" << std::endl;
    else
        std::cout << "Robotomy was failed" << std::endl;
}