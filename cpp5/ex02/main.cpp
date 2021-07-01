#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main()
{
    srand(time(NULL));

    Bureaucrat moi("moi");
    for (int k = 0; k < 147; k++)
        moi.increase();
    std::cout << moi;
    PresidentialPardonForm pres("Prisonner");
    moi.signForm(pres);
    pres.execute(moi);

    ShrubberyCreationForm tree("myForest");
    moi.signForm(tree);
    tree.execute(moi);

    RobotomyRequestForm robot("Gandalf");
    moi.signForm(robot);
    robot.execute(moi);

    return (0);
}