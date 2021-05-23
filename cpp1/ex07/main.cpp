#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Incorrect argument count\n";
        return (1);
    }
    std::string tmp = av[2];
    int len_remove = tmp.size();
    tmp = av[3];
    int len_replace = tmp.size();

    std::ifstream read;
    read.open(av[1], std::ifstream::in);
    tmp = av[1];
    tmp += ".replace";
    std::ofstream write(tmp);

    tmp = "";
    while (std::getline(read, tmp))
    {
        int index = 0;
        while ((index = tmp.find(av[2], index)) >= 0)
            tmp.replace(index, len_remove, av[3]);
        write << tmp << std::endl;
        tmp = "";
    }
    write.close();
    read.close();
}