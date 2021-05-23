#include <iostream>

int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    int count = 0;
    char c = 0;
    for (int i = 1; i < ac; i++)
    {
        count = 0;
        while ((c = (av[i])[count]))
        {
            if ((c >= 'a' && c <= 'z'))
                (av[i])[count] -= 32;
            count++;
        }
        std::cout << av[i] << " ";
    }
    std::cout << std::endl;
    return (0);
}