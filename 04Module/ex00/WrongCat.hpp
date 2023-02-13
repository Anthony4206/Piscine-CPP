#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# pragma once

# include <string>
# include "WrongAnimal.hpp"

class   WrongCat : public WrongAnimal {
    public:
        WrongCat(void);
        WrongCat(WrongCat const &object);
        virtual ~WrongCat(void);
        WrongCat  &operator=(WrongCat const &object);

        std::string     getType(void) const;
        void    makeSound(void) const;
};

#endif
