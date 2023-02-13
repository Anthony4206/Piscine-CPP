/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:15:13 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/13 11:14:56 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# pragma once

# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal {
	private:
		Brain	*_brain;
	public:
		Cat(void);
		Cat(Cat const &object);
		virtual ~Cat(void);
		Cat				&operator=(Cat const &object);

		std::string		getType(void) const;
		Brain			*getBrain(void) const;
		virtual void	makeSound(void) const;
};

#endif
