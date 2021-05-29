#include "Intern.hpp"

Intern::Intern()
{}

Intern::~Intern()
{}

Form *Intern::createPresidential(std::string target)
{
    Form *ptr = new PresidentialPardonForm();
    ptr->setTarget(target);
    return ptr;
}

Form *Intern::createRobotomy(std::string target)
{
    Form *ptr = new RobotomyRequestForm();
    ptr->setTarget(target);
    return ptr;
}

Form *Intern::createShrubbery(std::string target)
{
    Form *ptr = new ShrubberyCreationForm();
    ptr->setTarget(target);
    return ptr;
}

const char *Intern::FormNotFound::what() const throw()
{
    return "Form was not found";
}

Form *Intern::makeForm(std::string name, std::string target)
{
    std::string comp[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    Form *(Intern::*f[3])(std::string) = {&Intern::createPresidential, &Intern::createRobotomy, &Intern::createShrubbery};

    for (int i = 0; i < 3; i++)
        if (name == comp[i])
        {
            return (this->*f[i])(target);
        }
    throw Intern::FormNotFound();
    return 0;
}

