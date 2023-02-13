/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:16:43 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/13 11:22:26 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {
	std::cout << "The constructor created an Ice" << std::endl;
}

Ice::Ice(Ice const &object) : AMateria(object) {
	std::cout << "The copy constructor has created an Ice" << std::endl;
}

Ice::~Ice(void) {
	std::cout << "The destructor destroyed an Ice" << std::endl;
}

Ice	&Ice::operator=(Ice const &object) {
	this->AMateria::operator=(object);
	return (*this);
}

AMateria	*Ice::clone() const {
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
