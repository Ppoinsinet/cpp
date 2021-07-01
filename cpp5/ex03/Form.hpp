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
    std::string target;
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
    std::string getTarget() const;
    void setTarget(std::string newTarget);

    void execute(Bureaucrat const &tmp) const;

    virtual void executeForm(void) const = 0;

    void setName(std::string value);
    void beSigned(Bureaucrat& person);
    void setSign(bool value);

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