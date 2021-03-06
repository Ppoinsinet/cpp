#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{
private:
    const std::string name;
    bool sign;
    const int grade_sign;
    const int grade_execute;
public:
    Form(void);
    Form(const Form &tmp);
    Form(std::string newName, int sign = 150, int execute = 150);
    ~Form();

    Form &operator=(const Form &tmp);

    std::string getName() const;
    bool isSigned() const;
    int getGradeSign() const;
    int getGradeExec() const;

    void beSigned(Bureaucrat& person);

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