/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:09:10 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/13 09:14:40 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# pragma once

# include <iostream>
# include <string>

class	Animal {
	protected:
		std::string	_type;
	public:
		Animal(void);
		Animal(Animal const &object);
		virtual ~Animal(void);
		Animal			&operator=(Animal const &object);

		std::string		getType(void) const;
		virtual void	makeSound(void) const;
};

#endif
