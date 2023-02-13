#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# pragma once

# include <string>

class ClapTrap
{
protected:
    std::string     _name;
    int             _hitPoints;
    int             _energyPoints;
    int             _attackDamage;
    int             _repairPoints;
public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const &object);
    ~ClapTrap(void);
    ClapTrap    &operator=(ClapTrap const &object);

    std::string getName() const;
    int         getHitPoints() const;
    int         getEnergyPoints() const;
    int         getAttackDamage() const;
    int         getRepairPoints() const;

    void        attack(std::string const &target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);
};

#endif
