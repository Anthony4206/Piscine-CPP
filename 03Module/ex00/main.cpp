#include <iostream>
#include "ClapTrap.hpp"

int main(void) {
    ClapTrap    clap1("Bob");
    ClapTrap    clap2("Tom");

    clap1.attack(clap2.getName());
    clap2.takeDamage(clap1.getAttackDamage());
    clap2.beRepaired(clap2.getRepairPoints());
    clap2.attack(clap1.getName());
    clap1.takeDamage(clap2.getAttackDamage());
    clap1.beRepaired(clap1.getRepairPoints());
    clap1.takeDamage(10);
    clap1.attack(clap2.getName());
    clap1.takeDamage(clap2.getAttackDamage());
    clap1.beRepaired(clap1.getRepairPoints());
    return (0);
}
