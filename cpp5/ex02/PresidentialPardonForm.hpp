#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    /* data */
public:
    PresidentialPardonForm(/* args */);
    ~PresidentialPardonForm();

    virtual void execute(Bureaucrat const& executor);
};


#endif