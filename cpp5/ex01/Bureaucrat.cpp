#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void)
: name("Unknown"), grade(150)
{}

Bureaucrat::Bureaucrat(const Bureaucrat &tmp)
: name(tmp.name), grade(tmp.grade)
{}

Bureaucrat::Bureaucrat(std::string newName)
: name(newName), grade(150)
{}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &tmp)
{
    grade = tmp.grade;
    return *this;
}

void Bureaucrat::increase()
{
    if (grade == 1)
        throw Bureaucrat::GradeTooHighException();
    grade--;
}

void Bureaucrat::decrease()
{
    if (grade == 150)
        throw Bureaucrat::GradeTooLowException();
    grade++;
}

std::string Bureaucrat::getName() const
{ return name; }

int Bureaucrat::getGrade() const
{ return grade; }

void Bureaucrat::setGrade(int tmp)
{
    if (tmp < 1)
        throw Bureaucrat::GradeTooLowException();
    else if (tmp > 150)
        throw Bureaucrat::GradeTooHighException();
    grade = tmp;
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << getName() << " signs " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << getName() << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
    }    
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{ return "Grade too high"; }

const char *Bureaucrat::GradeTooLowException::what() const throw()
{ return "Grade too low"; }

std::ostream& operator<<(std::ostream& out, const Bureaucrat& tmp)
{
    out << tmp.getName() << ", bureaucrat grade " << tmp.getGrade() << "." << std::endl;
    return out;
}