/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:03:14 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/13 09:06:01 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# pragma once

# include <string>
# include "Animal.hpp"

class	Cat : public Animal {
	public:
		Cat(void);
		Cat(Cat const &object);
		virtual ~Cat(void);
		Cat				&operator=(Cat const &object);

		std::string		getType(void) const;
		virtual void	makeSound(void) const;
};

#endif
