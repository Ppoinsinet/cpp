#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
: Form("shrubbery creation", 145, 137)
{}

void ShrubberyCreationForm::execute(Bureaucrat const& executor)
{
    if (!isSigned())
        return ;
    if (executor.getGrade() > getGradeExec())
        throw Form::GradeTooLowException();
    //dessine des arbres dans un fichier
}