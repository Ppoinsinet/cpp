#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string newName, int sign, int execute)
: name(newName), sign(false), grade_sign(sign), grade_execute(execute)
{
}

Form::~Form()
{
}

std::string Form::getName() const
{
    return name;
}

bool Form::isSigned() const
{
    return sign;
}

int Form::getGradeSign() const
{
    return grade_sign;
}

int Form::getGradeExec() const
{
    return grade_execute;
}

void Form::setName(std::string value)
{
    name = value;
}

void Form::beSigned(Bureaucrat& person)
{
    if (person.getGrade() > getGradeSign())
        throw Form::GradeTooLowException();
    sign = true;
}

std::ostream& operator<<(std::ostream& out, Form& tmp)
{
    out << "Form : " << tmp.getName() << ", needing " << tmp.getGradeSign() << " to be signed and "
    << tmp.getGradeExec() << " to be executed is ";
    if (tmp.isSigned())
        out << "signed" << std::endl;
    else
        out << "not signed" << std::endl;
    return out;
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Bureaucrat grade is too low";
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Bureaucrat grade is too high";
}