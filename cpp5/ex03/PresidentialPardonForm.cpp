#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
: Form("presidential pardon", 25, 5)
{
}

void PresidentialPardonForm::execute(Bureaucrat const& executor)
{
    if (!isSigned())
        return ;
    std::cout << getTarget() << " was forgiven by Zafod Beeblebrox" << std::endl;
}