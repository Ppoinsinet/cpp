#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    /* data */
public:
    RobotomyRequestForm(/* args */);
    ~RobotomyRequestForm();

    void execute(Bureaucrat const& executor);

};

#endif