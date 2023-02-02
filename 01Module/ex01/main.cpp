#include <iostream>
#include <string>

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name);

int main(void) {
    Zombie  *zombie_horde;

    zombie_horde = zombieHorde(15, "toto");
    for (int i = 0; i < 15; i++)
        zombie_horde[i].announce();
    delete [] zombie_horde;
    return (0);
}
