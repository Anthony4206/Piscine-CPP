#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# pragma once

# include <string>
# include "ICharacter.hpp"

class   AMateria {
    protected:
        std::string _type;
    public:
        AMateria(std::string const &type);
        AMateria(AMateria const &object);
        virtual ~AMateria(void);

        AMateria    &operator=(AMateria const &object);

        std::string const   &getType() const;
        virtual AMateria    *clone() const = 0;
        virtual void        use(ICharacter &target);
};

#endif
