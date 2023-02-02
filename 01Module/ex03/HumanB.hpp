#ifndef HUMANB_HPP
# define HUMANB_HPP

#pragma once

# include <string>
# include "Weapon.hpp"

class HumanB {
    private:
        Weapon      *_weapon;
        std::string _name;
    public:
        HumanB(std::string name);
        ~HumanB(void);

        void    attack(void) const;
        void    setWeapon(Weapon &item);
};

#endif
