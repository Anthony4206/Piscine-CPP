#include <iostream>

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name) {
    Zombie  *zombie_horde;

    if (N < 1) {
        std::cout << "N is invalid" << std::endl;
        return (NULL);
    }
    zombie_horde = new Zombie[N];
    for (int i = 0; i < N; i++)
        zombie_horde[i].setName(name);
    return (zombie_horde);
}
