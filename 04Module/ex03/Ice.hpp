#ifndef ICE_HPP
# define ICE_HPP

# pragma once

# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class   Ice : public AMateria {
    protected:
        std::string _type;
    public:
        Ice(void);
        Ice(Ice const &object);
        virtual ~Ice(void);

        Ice    &operator=(Ice const &object);

        virtual AMateria    *clone() const;
        virtual void        use(ICharacter &target);
};

#endif
