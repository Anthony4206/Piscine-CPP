/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:03:20 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/13 09:06:33 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# pragma once

# include <string>
# include "Animal.hpp"

class	Dog : public Animal {
	public:
		Dog(void);
		Dog(Dog const &object);
		virtual ~Dog(void);
		Dog				&operator=(Dog const &object);

		std::string		getType(void) const;
		virtual void	makeSound(void) const;
};

#endif
