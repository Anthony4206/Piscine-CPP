/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:17:08 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/13 11:18:57 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# pragma once

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource {
	private:
		AMateria	*_materia[4];
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &object);
		virtual ~MateriaSource(void);

		MateriaSource		&operator=(MateriaSource const &object);

		virtual void		learnMateria(AMateria *object);
		virtual AMateria	*createMateria(std::string const &type);
};

#endif
