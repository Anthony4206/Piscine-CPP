#include <iostream>
#include "ScavTrap.hpp"

int main(void) {
    ClapTrap    clap1("Toto");
    ScavTrap	scav1("Tata");

    clap1.attack(scav1.getName());
    scav1.takeDamage(clap1.getAttackDamage());
    scav1.attack(clap1.getName());
    clap1.takeDamage(scav1.getAttackDamage());
    clap1.beRepaired(clap1.getRepairPoints());
    scav1.beRepaired(scav1.getRepairPoints());
    return (0);
}
