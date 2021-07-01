#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <stdlib.h>

class RobotomyRequestForm : public Form
{
private:
    /* data */
public:
    RobotomyRequestForm(/* args */);
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &tmp);
    ~RobotomyRequestForm();

    RobotomyRequestForm &operator=(const RobotomyRequestForm &tmp);

    virtual void executeForm(void) const;

};

#endif