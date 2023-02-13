/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:16:52 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/13 11:21:13 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# pragma once

# include "AMateria.hpp"

class	IMateriaSource {
	public:
		virtual ~IMateriaSource() {}
		virtual void		learnMateria(AMateria *) = 0;
		virtual AMateria	*createMateria(std::string const &type) = 0;
	};

#endif
