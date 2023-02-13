#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# pragma once

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class   MateriaSource : public IMateriaSource {
    private:
        AMateria    *_materia[4];
    public:
        MateriaSource(void);
        MateriaSource(MateriaSource const &object);
        virtual ~MateriaSource(void);

        MateriaSource   &operator=(MateriaSource const &object);

        virtual void        learnMateria(AMateria *object);
        virtual AMateria*   createMateria(std::string const &type);
};

#endif
