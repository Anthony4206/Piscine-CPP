/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:15:07 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/13 11:15:31 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# pragma once

# include <iostream>
# include <string>

class	Brain {
	private:
		std::string	_ideas[100];
	public:
		Brain(void);
		Brain(Brain const &object);
		~Brain(void);
		Brain		&operator=(Brain const &object);

		std::string	getIdeas(int index) const ;
};

#endif
