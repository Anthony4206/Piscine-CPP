#include <iostream>

#include "Harl.hpp"

void    speaker(std::string comment, Harl harl) {
    std::cout << "[ " << comment << " ]" << std::endl;
    harl.complain(comment);
    std::cout << std::endl;
}

int main(void) {
    Harl harl;

    speaker("DEBUG", harl);
    speaker("INFO", harl);
    speaker("WARNING", harl);
    speaker("ERROR", harl);
    speaker("WARNING", harl);
    speaker("INFO", harl);
    speaker("DEBUG", harl);
    speaker("DEBUG", harl);
    speaker("ERROR", harl);
    return (0);
}
