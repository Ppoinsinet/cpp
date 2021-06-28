#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
: Form("ShrubberyCreation", 145, 137)
{ setTarget("NoTarget"); }

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: Form("ShrubberyCreation", 145, 137)
{ setTarget(target); }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &tmp)
: Form("ShrubberyCreation", 145, 137)
{ setTarget(tmp.getTarget()); setSign(tmp.isSigned()); }

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &tmp)
{ setSign(tmp.isSigned()); return *this; }

void ShrubberyCreationForm::executeForm(void) const
{
    std::ofstream tmp(std::string (getTarget() + "_shrubbery").data());
    tmp <<
"          * \n \
        /|\\                  \n \
       /*|O\\ \n \
      /*/|\\*\\ \n \
     /X/O|*\\X\\ \n \
    /*/X/|\\X\\*\\ \n \
   /O/*/X|*\\O\\X\\              \n \
  /*/O/X/|\\X\\O\\*\\ \n \
 /X/O/*/X|O\\X\\*\\O\\ \n \
/O/X/*/O/|\\X\\*\\O\\X\\ \n \
        |X|      \n \
        |X|    \n\n";

        tmp << "          * \n \
        /|\\                  \n \
       /*|O\\ \n \
      /*/|\\*\\ \n \
     /X/O|*\\X\\ \n \
    /*/X/|\\X\\*\\ \n \
   /O/*/X|*\\O\\X\\              \n \
  /*/O/X/|\\X\\O\\*\\ \n \
 /X/O/*/X|O\\X\\*\\O\\ \n \
/O/X/*/O/|\\X\\*\\O\\X\\ \n \
        |X|      \n \
        |X|    \n\n";

        tmp << "          * \n \
        /|\\                  \n \
       /*|O\\ \n \
      /*/|\\*\\ \n \
     /X/O|*\\X\\ \n \
    /*/X/|\\X\\*\\ \n \
   /O/*/X|*\\O\\X\\              \n \
  /*/O/X/|\\X\\O\\*\\ \n \
 /X/O/*/X|O\\X\\*\\O\\ \n \
/O/X/*/O/|\\X\\*\\O\\X\\ \n \
        |X|      \n \
        |X|    \n\n";
        tmp.close();
}