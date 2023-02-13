/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:15:22 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/13 11:14:13 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# pragma once

# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal {
	private:
		Brain	*_brain;
	public:
		Dog(void);
		Dog(Dog const &object);
		virtual ~Dog(void);
		Dog				&operator=(Dog const &object);

		std::string		getType(void) const;
		Brain			*getBrain(void) const;
		virtual void	makeSound(void) const;
};

#endif
