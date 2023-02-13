/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:16:40 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/13 11:22:46 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# pragma once

# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Cure : public AMateria {
	protected:
		std::string	_type;
	public:
		Cure(void);
		Cure(Cure const &object);
		virtual ~Cure(void);

		Cure				&operator=(Cure const &object);

		virtual AMateria	*clone() const;
		virtual void		use(ICharacter &target);
};

#endif
