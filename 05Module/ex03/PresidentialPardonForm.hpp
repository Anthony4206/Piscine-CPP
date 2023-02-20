/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:23:00 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/20 16:23:02 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <exception>

# include "AForm.hpp"

class	Bureaucrat;

class	PresidentialPardonForm : public AForm {
	private:
		PresidentialPardonForm(void);
	public:
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(PresidentialPardonForm const &rhs);
		~PresidentialPardonForm(void);

		PresidentialPardonForm	&operator=(PresidentialPardonForm const &rhs);

		virtual void			execute(Bureaucrat const &executor) const;
};
