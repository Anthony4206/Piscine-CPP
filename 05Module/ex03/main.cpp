/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:22:19 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/20 16:22:34 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void) {
	Intern someRandomIntern;
	AForm	*rrf;
	AForm	*rrf2;
	AForm	*rrf3;
	AForm	*rrf4;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf2 = someRandomIntern.makeForm("shrubbery creation", "Noel");
	rrf3 = someRandomIntern.makeForm("presidential pardon", "Sirius Black");
	rrf4 = someRandomIntern.makeForm("failed", "Troll");

	delete rrf;
	delete rrf2;
	delete rrf3;
	delete rrf4;

	return (0);
}
