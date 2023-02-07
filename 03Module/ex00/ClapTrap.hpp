#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
private:
    std::string     _name;
    unsigned int    _hitPoints;
    unsigned int    _energyPoints;
    unsigned int    _attackDamage;
    unsigned int    _repairPoints;
public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const &object);
    ~ClapTrap(void);
    ClapTrap        &operator=(ClapTrap const &object);

    std::string     getName() const;
    unsigned int    getHitPoints() const;
    unsigned int    getEnergyPoints() const;
    unsigned int    getAttackDamage() const;
    unsigned int    getRepairPoints() const;

    void            attack(std::string const &target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);
};

#endif
