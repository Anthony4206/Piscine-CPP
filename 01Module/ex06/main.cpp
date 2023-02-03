#include <iostream>

#include "Harl.hpp"

void    speaker(std::string comment, Harl harl) {
    std::cout << "[ " << comment << " ]" << std::endl;
    harl.complain(comment);
    std::cout << std::endl;
}


int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "./HarlFilter <comment>" << std::endl;
        return (-1);
    }

    std::string level = argv[1];
    std::string comment[4];

    comment[0] = "DEBUG";
    comment[1] = "INFO";
    comment[2] = "WARNING";
    comment[3] = "ERROR";

    int i;
    for (i = 0; i < 4; i++)
        if (comment[i] == level)
            break;

    Harl harl;
    switch (i + 1) {
        case 1:
            speaker("DEBUG", harl);
        case 2:
            speaker("INFO", harl);
        case 3:
            speaker("WARNING", harl);
        case 4:
            speaker("ERROR", harl);
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return (0);
}
