#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main()
{
    srand(time(NULL));

    Bureaucrat moi("moi");
    try
    {
        std::cout << moi;
        moi.decrease();
        std::cout << moi;
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception : " << e.what() << std::endl;
    }
    for (int k = 0; k < 147; k++)
        moi.increase();
    std::cout << moi;
    PresidentialPardonForm pres("Prisonner");
    PresidentialPardonForm pres2;
    moi.signForm(pres);
    pres.execute(moi);

    ShrubberyCreationForm tree("myForest");
    ShrubberyCreationForm tree2;
    moi.signForm(tree);
    tree.execute(moi);

    RobotomyRequestForm robot("Gandalf");
    RobotomyRequestForm robot2;
    moi.signForm(robot);
    robot.execute(moi);

    return (0);
}