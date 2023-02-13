#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {
	public:
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &object);
        ~ScavTrap(void);
        ScavTrap    &operator=(ScavTrap const &object);

        void    attack(std::string const &target);
        void    guardGate(void);
};

#endif
