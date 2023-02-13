#ifndef CAT_HPP
# define CAT_HPP

# pragma once

# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class   Cat : public Animal {
    private:
        Brain   *_brain;
    public:
        Cat(void);
        Cat(Cat const &object);
        virtual ~Cat(void);
        Cat  &operator=(Cat const &object);

        std::string     getType(void) const;
        Brain           *getBrain(void) const;
        virtual void    makeSound(void) const;
};

#endif
