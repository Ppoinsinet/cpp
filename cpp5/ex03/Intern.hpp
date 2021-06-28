#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
    /* data */
public:
    Intern(/* args */);
    Intern(const Intern &tmp);
    ~Intern();

    Intern &operator=(const Intern &tmp);

    Form *createPresidential(std::string target);
    Form *createRobotomy(std::string target);
    Form *createShrubbery(std::string target);

    class FormNotFound : public std::exception
    {
        virtual const char *what() const throw();
    };

    Form *makeForm(std::string name, std::string target);
};


#endif