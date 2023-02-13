#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# pragma once

# include <string>
# include "AMateria.hpp"

class   Character : public ICharacter {
    protected:
        std::string _name;
        AMateria    *_materia[4];
    public:
        Character(std::string const &name);
        Character(Character const &object);
        virtual ~Character(void);

        Character    &operator=(Character const &object);

        virtual std::string const   &getName() const;
        virtual void                equip(AMateria* m);
        virtual void                unequip(int idx);
        virtual void                use(int idx, ICharacter& target);
};

#endif
