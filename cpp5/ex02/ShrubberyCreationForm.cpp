#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
: Form("ShrubberyCreation", 145, 137)
{}

void ShrubberyCreationForm::execute(Bureaucrat const& executor)
{
    if (executor.getGrade() > getGradeExec())
        throw Form::GradeTooLowException();
    //dessine des arbres dans un fichier
}