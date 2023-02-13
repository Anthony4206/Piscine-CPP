/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:14:57 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/13 11:12:56 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal(void) : _type("") {
	std::cout << "The constructor created an Animal" << std::endl;
}

Animal::Animal(Animal const &object) {
	std::cout << "The copy constructor has created an Animal" << std::endl;
	*this = object;
}

Animal::~Animal(void) {
	std::cout << "The destructor destroyed an Animal" << std::endl;
}

Animal	&Animal::operator=(Animal const &object) {
	this->_type = object._type;
	return (*this);
}

std::string	Animal::getType(void) const {
	return (_type);
}

void	Animal::makeSound(void) const {
	std::cout << "..." << std::endl;
}
