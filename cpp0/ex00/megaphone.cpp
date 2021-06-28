#include <iostream>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    for (int i = 1; i < ac; i++)
    {
        char *tmp = av[i];
        while (*tmp == ' ')
            tmp++;
        while (*tmp)
        {
            if (*tmp >= 'a' && *tmp <= 'z')
                std::cout << (char)(*tmp - 32);
            else if (*tmp != ' ' || *(tmp + 1))
                std::cout << *tmp;
            tmp++;
        }
        if (i < ac - 1)
            std::cout << " ";
    }
    return (0);
}