/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:09:13 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/13 09:14:27 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "The constructor created a Brain" << std::endl;
	for (int i(0); i < 100; i++) {
		_ideas[i] = "Ideas " + std::to_string(i + 1);
	}
}

Brain::Brain(Brain const &object) {
	for (int i(0); i < 100; i++) {
		this->_ideas[i] = object._ideas[i];
	}
	std::cout << "The copy constructor has created a Brain" << std::endl;
}

Brain::~Brain(void) {
	std::cout << "The destructor destroyed a Brain" << std::endl;
}

Brain	&Brain::operator=(Brain const &object) {
	for (int i(0); i < 100; i++) {
		this->_ideas[i] = object._ideas[i];
	}
	return (*this);
}

std::string	Brain::getIdeas(int index) const {
	return (_ideas[index]);
}
