#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
    /* data */
public:
    ShrubberyCreationForm(/* args */);
    ~ShrubberyCreationForm();

    void execute(Bureaucrat const& executor);
};


#endif