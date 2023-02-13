/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:16:46 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/13 11:22:11 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# pragma once

# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Ice : public AMateria {
	protected:
		std::string	_type;
	public:
		Ice(void);
		Ice(Ice const &object);
		virtual ~Ice(void);

		Ice					&operator=(Ice const &object);

		virtual AMateria	*clone() const;
		virtual void		use(ICharacter &target);
};

#endif
