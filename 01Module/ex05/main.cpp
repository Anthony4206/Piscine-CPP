#include <iostream>

#include "Harl.hpp"

int main(void) {
    Harl harl;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("WARNING");
    harl.complain("INFO");
    harl.complain("DEBUG");
    harl.complain("DEBUG");
    harl.complain("ERROR");
    return (0);
}
