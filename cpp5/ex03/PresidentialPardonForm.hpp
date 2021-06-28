#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    /* data */
public:
    PresidentialPardonForm(std::string target = "NoTarget");
    PresidentialPardonForm(const PresidentialPardonForm &tmp);
    ~PresidentialPardonForm();

    PresidentialPardonForm &operator=(const PresidentialPardonForm &tmp);

    virtual void executeForm() const;
};


#endif