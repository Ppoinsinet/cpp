#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{
private:
    std::string name;
    std::string target;
    bool sign;
    int grade_sign;
    int grade_execute;
public:
    Form(std::string newName, int sign = 150, int execute = 150);
    ~Form();

    std::string getName() const;
    bool isSigned() const;
    int getGradeSign() const;
    int getGradeExec() const;
    std::string getTarget() const;

    void setTarget(std::string value);
    void setName(std::string value);
    void beSigned(Bureaucrat& person);
    virtual void execute(Bureaucrat const& executor) = 0;

    class GradeTooHighException : public std::exception
    {
        virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        virtual const char *what() const throw();
    };
};

std::ostream& operator<<(std::ostream& out, Form& tmp);

#endif