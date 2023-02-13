/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:03:45 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/13 09:08:34 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# pragma once

# include <string>
# include "WrongAnimal.hpp"

class   WrongCat : public WrongAnimal {
	public:
		WrongCat(void);
		WrongCat(WrongCat const &object);
		virtual ~WrongCat(void);
		WrongCat	&operator=(WrongCat const &object);

		std::string	getType(void) const;
		void		makeSound(void) const;
};

#endif
