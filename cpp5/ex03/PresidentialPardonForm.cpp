#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
: Form("PresidentialPardonForm", 25, 5)
{ setTarget("noTarget"); }

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: Form("PresidentialPardonForm", 25, 5)
{ setTarget(target); }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &tmp)
: Form("PresidentialPardonForm", 25, 5)
{ setTarget(tmp.getTarget()); setSign(tmp.isSigned()); }

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &tmp)
{ setTarget(tmp.getTarget()); setSign(tmp.isSigned()); return *this; }

PresidentialPardonForm::~PresidentialPardonForm()
{}

void PresidentialPardonForm::executeForm(void) const
{ std::cout << getTarget() << " was forgiven by Zafod Beeblebrox" << std::endl; }
