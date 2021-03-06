#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
: name("UnknownForm"), sign(false), grade_sign(150), grade_execute(150)
{}

Form::Form(const Form &tmp)
: name(tmp.name), sign(tmp.sign), grade_sign(tmp.grade_sign), grade_execute(tmp.grade_execute)
{}

Form::Form(std::string newName, int sign, int execute)
: name(newName), sign(false), grade_sign(sign), grade_execute(execute)
{}

Form::~Form()
{}

Form &Form::operator=(const Form &tmp)
{
    sign = tmp.sign;
    return *this;
}

std::string Form::getName() const
{ return name; }

bool Form::isSigned() const
{ return sign; }

int Form::getGradeSign() const
{ return grade_sign; }

int Form::getGradeExec() const
{ return grade_execute; }

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
{ return "Bureaucrat grade is too low"; }

const char *Form::GradeTooHighException::what() const throw()
{ return "Bureaucrat grade is too high"; }