#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: Form("PresidentialPardonForm", 25, 5)
{ setTarget(target); }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &tmp)
: Form("PresidentialPardonForm", 25, 5)
{ setSign(tmp.isSigned()); }

void PresidentialPardonForm::executeForm(void) const
{ std::cout << getTarget() << " was forgiven by Zafod Beeblebrox" << std::endl; }

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &tmp)
{ setSign(tmp.isSigned()); return *this; }

PresidentialPardonForm::~PresidentialPardonForm()
{}