#ifndef CAT_HPP
# define CAT_HPP

# pragma once

# include <string>
# include "Animal.hpp"

class   Cat : public Animal {
    public:
        Cat(void);
        Cat(Cat const &object);
        virtual ~Cat(void);
        Cat  &operator=(Cat const &object);

        std::string     getType(void) const;
        virtual void    makeSound(void) const;
};

#endif
