#include "FragTrap.hpp"

int main(void) {
    ClapTrap    clap1("Bob");
    FragTrap    frag1("Jose");
    ClapTrap    clap2("Hugue");
    FragTrap    frag2("Micheline");
    FragTrap    frag3(frag2);
    
    frag1.highFivesGuys();
    frag2.highFivesGuys();
    frag1.attack(clap1.getName());
    clap1.takeDamage(frag1.getAttackDamage());
    clap1.beRepaired(clap1.getRepairPoints());
    return (0);
}
