#ifndef CURE_HPP
# define CURE_HPP

# pragma once

# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class   Cure : public AMateria {
    protected:
        std::string _type;
    public:
        Cure(void);
        Cure(Cure const &object);
        virtual ~Cure(void);

        Cure    &operator=(Cure const &object);

        virtual AMateria    *clone() const;
        virtual void        use(ICharacter &target);
};

#endif
