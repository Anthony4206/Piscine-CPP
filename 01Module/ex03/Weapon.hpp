#ifndef WEAPON_HPP
# define WEAPON_HPP

#pragma once

# include <iostream>
# include <string>

class Weapon {
    private:
        std::string type;
    public:
        Weapon(std::string item);
        ~Weapon(void);

    std::string const   &getType(void) const;
    void                setType(std::string new_type);
};

#endif
