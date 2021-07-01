#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern &tmp)
{ (void)tmp; }

Intern::~Intern()
{}

Intern &Intern::operator=(const Intern &tmp)
{ (void)tmp; return *this; }

Form *Intern::createPresidential(std::string target)
{ return new PresidentialPardonForm(target); }

Form *Intern::createRobotomy(std::string target)
{ return new RobotomyRequestForm(target); }

Form *Intern::createShrubbery(std::string target)
{ return new ShrubberyCreationForm(target); }

Form *Intern::makeForm(std::string name, std::string target)
{
    std::string comp[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    Form *(Intern::*f[3])(std::string) = {&Intern::createPresidential, &Intern::createRobotomy, &Intern::createShrubbery};

    for (int i = 0; i < 3; i++)
        if (name == comp[i])
        {
            std::cout << "Intern creates " << name << " form" << std::endl;
            return (this->*f[i])(target);
        }
    std::cout << name << " form was not found\n";
    return 0;
}

