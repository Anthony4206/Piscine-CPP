/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:16:49 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/13 11:21:42 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# pragma once

# include <string>

class	AMateria;

class	ICharacter {
	public:
		virtual ~ICharacter() {}
		virtual std::string const	&getName() const = 0;
		virtual void				equip(AMateria *m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharacter &target) = 0;
};

#endif
