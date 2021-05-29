#include "PresidentialPardonForm.hpp"

void PresidentialPardonForm::execute(Bureaucrat const& executor)
{
    if (!isSigned())
        return ;
    std::cout << getTarget() << " was forgiven by Zafod Beeblebrox" << std::endl;
}