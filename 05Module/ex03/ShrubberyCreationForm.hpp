/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:22:43 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/20 16:22:44 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <exception>

# include "AForm.hpp"

class	Bureaucrat;

class	ShrubberyCreationForm : public AForm {
	private:
		ShrubberyCreationForm(void);
	public:
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &rhs);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &rhs);

		virtual void			execute(Bureaucrat const &executor) const;
};
