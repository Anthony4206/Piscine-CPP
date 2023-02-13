/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:16:32 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/13 11:23:30 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# pragma once

# include <string>
# include "AMateria.hpp"

class	Character : public ICharacter {
	protected:
		std::string	_name;
		AMateria	*_materia[4];
	public:
		Character(std::string const &name);
		Character(Character const &object);
		virtual ~Character(void);

		Character					&operator=(Character const &object);

		virtual std::string const	&getName() const;
		virtual void				equip(AMateria* m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter& target);
};

#endif
