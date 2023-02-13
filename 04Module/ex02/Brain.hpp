#ifndef BRAIN_HPP
# define BRAIN_HPP

# pragma once

# include <iostream>
# include <string>

class   Brain {
    private:
        std::string _ideas[100];
    public:
        Brain(void);
        Brain(Brain const &object);
        ~Brain(void);
        Brain  &operator=(Brain const &object);

        std::string getIdeas(int index) const ;
};

#endif
