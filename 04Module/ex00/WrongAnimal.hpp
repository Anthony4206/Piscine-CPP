/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:03:35 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/13 09:08:04 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# pragma once

# include <iostream>
# include <string>

class   WrongAnimal {
	protected:
		std::string	_type;
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &object);
		virtual ~WrongAnimal(void);
		WrongAnimal	&operator=(WrongAnimal const &object);

		std::string	getType(void) const;
		void		makeSound(void) const;
};

#endif
