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
    Bureaucrat(std::string newName);
    ~Bureaucrat();

    std::string getName() const;
    int getGrade() const;
    void setName(std::string);
    void setGrade(int);
    void increase(void);
    void decrease(void);

    void signForm(Form &form);


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