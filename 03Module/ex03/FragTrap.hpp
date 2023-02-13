#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# pragma once

# include <string>
# include "ClapTrap.hpp"

class	FragTrap : public virtual ClapTrap {
	public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap const &object);
        ~FragTrap(void);
        FragTrap    &operator=(FragTrap const &object);

        void        attack(std::string const &target);
        void        highFivesGuys(void);
};

#endif
