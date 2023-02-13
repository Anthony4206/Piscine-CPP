#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# pragma once

# include <iostream>
# include <string>

class   Animal {
    protected:
        std::string _type;
    public:
        Animal(void);
        Animal(Animal const &object);
        virtual ~Animal(void);
        Animal  &operator=(Animal const &object);

        std::string     getType(void) const;
        virtual void    makeSound(void) const = 0;
};

#endif
