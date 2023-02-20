/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:21:28 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/20 16:21:39 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <exception>

# include "AForm.hpp"

class	Bureaucrat;

class	RobotomyRequestForm : public AForm {
	private:
		RobotomyRequestForm(void);
	public:
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &rhs);
		~RobotomyRequestForm(void);

		RobotomyRequestForm	&operator=(RobotomyRequestForm const &rhs);

		virtual void			execute(Bureaucrat const &executor) const;
};
