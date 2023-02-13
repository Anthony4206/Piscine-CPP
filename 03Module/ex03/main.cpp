#include <iostream>
#include "DiamondTrap.hpp"

int main(void) {
    DiamondTrap diamond1("Tic");
    DiamondTrap diamond2;

    diamond1.attack(diamond2.getName());
    diamond2.takeDamage(diamond1.getAttackDamage());
    diamond2.attack(diamond1.getName());
    diamond1.takeDamage(diamond2.getAttackDamage());
    diamond1.beRepaired(diamond1.getRepairPoints());
    diamond2.beRepaired(diamond2.getRepairPoints());
    diamond1.guardGate();
    diamond2.highFivesGuys();
    diamond1.whoAmI();
    diamond2.whoAmI();
    return (0);
}
