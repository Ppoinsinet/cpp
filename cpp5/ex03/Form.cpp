#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
: name("UnknownForm"), target(""), sign(false), grade_sign(150), grade_execute(150)
{}

Form::Form(const Form &tmp)
: name(tmp.name), target(tmp.target), sign(tmp.sign), grade_sign(tmp.grade_sign), grade_execute(tmp.grade_execute)
{}

Form::Form(std::string newName, int sign, int execute)
: name(newName), target(""),sign(false), grade_sign(sign), grade_execute(execute)
{}

Form::~Form()
{}

Form &Form::operator=(const Form &tmp)
{
    name = tmp.name;
    target = tmp.target;
    sign = tmp.sign;
    grade_sign = tmp.grade_sign;
    grade_execute = tmp.grade_execute;
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

std::string Form::getTarget() const
{ return target; }

void Form::setSign(bool value)
{ sign = value; }

void Form::setTarget(std::string newTarget)
{ target = newTarget; }

void Form::setName(std::string value)
{ name = value; }

void Form::beSigned(Bureaucrat& person)
{
    if (person.getGrade() > getGradeSign())
        throw Form::GradeTooLowException();
    sign = true;
}

void Form::execute(const Bureaucrat &tmp) const
{
    if (isSigned())
    {
        if (tmp.getGrade() > grade_execute)
            throw Form::GradeTooLowException();
        this->executeForm();
    }
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