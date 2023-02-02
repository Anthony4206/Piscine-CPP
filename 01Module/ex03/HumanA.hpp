#ifndef HUMANA_HPP
# define HUMANA_HPP

#pragma once

# include <string>
# include "Weapon.hpp"

class HumanA {
    private:
        Weapon      &_weapon;
        std::string _name;
    public:
        HumanA(std::string name, Weapon &item);
        ~HumanA(void);

        void    attack(void);
};

#endif
