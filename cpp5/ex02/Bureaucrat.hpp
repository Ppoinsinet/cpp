#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Form;

class Bureaucrat
{
private:
    std::string name;
    int grade;
public:
    Bureaucrat(void);
    Bureaucrat(const Bureaucrat &tmp);
    Bureaucrat(std::string newName);
    ~Bureaucrat();

    Bureaucrat &operator=(const Bureaucrat &tmp);

    std::string getName() const;
    int getGrade() const;
    void setName(std::string);
    void setGrade(int);
    void increase(void);
    void decrease(void);

    void signForm(Form &form);
    void executeForm(Form const &form) const;


    class GradeTooHighException: public std::exception
    {
    public:
        virtual const char *what() const throw();
    };

    class GradeTooLowException: public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& tmp);

#endif