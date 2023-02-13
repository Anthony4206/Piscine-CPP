#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# pragma once

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class   DiamondTrap : public ScavTrap, public FragTrap {
    private:
        std::string _name;
    public:
        DiamondTrap(void);
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const &object);
        ~DiamondTrap(void);
        DiamondTrap &operator=(DiamondTrap const &object);

        void        attack(std::string const &target);
        void        whoAmI(void);
};

#endif
