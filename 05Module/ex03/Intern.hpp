/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:22:15 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/20 16:22:30 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <exception>

# include "AForm.hpp"

class	Intern {
public:
	Intern(void);
	Intern(Intern const &rhs);
	~Intern(void);

	Intern	&operator=(Intern const &rhs);

	AForm	*makeForm(std::string const &nameForm, std::string const &target);

	class BadNameException : public std::exception {
		public:
			const char	*what() const throw();
	};
};
