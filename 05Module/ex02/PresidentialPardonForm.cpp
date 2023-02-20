/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:20:32 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/20 16:21:42 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
	: AForm(std::string("Presidential"), target, 25, 5) {
	std::cout << "The constructor created a PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &rhs)
	: AForm(rhs) {
	std::cout << "The copy constructor created a PresidentialPardonForm" << std::endl;
	*this = rhs;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	std::cout << "The destructor destroyed a PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
	if (this != &rhs) {
		AForm::operator=(rhs);
	}
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (!this->getSign() || (getExecGrade() < executor.getGrade())) {
		throw ExecutionConditionInvalid();
	}

	std::cout << getTarget() << " has been forgiven by Zaphod Beeblebrox" << std::endl;
}
