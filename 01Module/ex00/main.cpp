#include <iostream>
#include <string>

#include "Zombie.hpp"

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

int main(void) {
    Zombie  *zombie;

    zombie = newZombie("toto");
    zombie->announce();
    randomChump("tata");
    delete zombie;
    return (0);
}
