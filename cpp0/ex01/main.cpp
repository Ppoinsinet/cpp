#include <iostream>
#include <sstream>
#include "contact.hpp"

void print(std::string tmp)
{
    size_t size = tmp.size();
    if (size < 10)
    {
        for (size_t j = 0 ; j < 10 - size; j++)
            std::cout << " ";
        std::cout << tmp;
    }
    else if (size > 10)
        std::cout << tmp.substr(0, 9) << ".";
    else
        std::cout << tmp;
}

int main()
{
    std::string input;
    contact tab[8];
    size_t size = 0;
    while (1)
    {
        std::cout << "Input : ";
        getline(std::cin, input);

        if (input == "EXIT")
            break;
        else if (input == "ADD")
        {
            if (size == 8)
            {
                std::cout << "Too many contacts are registered\n" << std::endl;
                continue;
            }
            tab[size++].setContact();
        }
        else if (input == "SEARCH")
        {
            if (!size)
            {
                std::cout << "No contacts registered\n" << std::endl;
                continue ;
            }
            std::cout << "     Index|  LastName| FirstName|  Nickname|" << std::endl;
            std::cout << "--------------------------------------------" << std::endl;
            for (size_t j = 0; j < size; j++)
            {
                std::cout << "         " << j << "|";
                print(tab[j].getLName());
                std::cout << "|";
                print(tab[j].getFName());
                std::cout << "|";
                print(tab[j]. getNickname());
                std::cout << "|" << std::endl;
            }
            std::cout << "Index : ";
            std::string index_str;
            getline(std::cin, index_str);

            size_t index = 0;
            std::stringstream stream;
            stream << index_str;
            stream >> index;

            if (!(index_str[0] >= '0' && index_str[0] <= '9') || index_str[1] || !(index >= 0 && index <= size))
            {
                std::cout << "Index is incorrect\n" << std::endl;
                continue ;
            }
            tab[index].introduce();
        }
        else
            std::cout << "Incorrect Input : \"" << input << "\"";
        std::cout << '\n';
        std::cin.clear();
    }
    return (0);
}