#ifndef DOG_HPP
# define DOG_HPP

# pragma once

# include <string>
# include "Animal.hpp"

class   Dog : public Animal {
    public:
        Dog(void);
        Dog(Dog const &object);
        virtual ~Dog(void);
        Dog  &operator=(Dog const &object);

        std::string     getType(void) const;
        virtual void    makeSound(void) const;
};

#endif
