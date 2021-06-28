#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    // Error handling
    if (ac != 4 || !std::string(av[1]).size() || !std::string(av[2]).size() || !std::string(av[3]).size())
    {
        std::cout << "Incorrect arguments\n";
        return (1);
    }
    //Get text_to_remove size
    int len_remove = std::string(av[2]).size();

    //Read file
    std::ifstream read;
    read.open(av[1], std::ifstream::in);

    //Create new file
    std::string tmp = av[1];
    tmp += ".replace";
    std::ofstream write(tmp.c_str());

    tmp.clear();
    while (std::getline(read, tmp))
    {
        size_t index = 0;
        while ((index = tmp.find(av[2], index)) != std::string::npos)       //While there is an occurence on the current line
        {
            tmp.replace(index, len_remove, av[3]);                          //Replace the occurence at index
            index += len_remove;
        }
        write << tmp << std::endl;                                          //Write new line in new file
        tmp.clear();
    }
    //Close read/write streams
    write.close();
    read.close();
}