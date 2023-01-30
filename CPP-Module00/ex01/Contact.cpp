/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 08:49:05 by alevasse          #+#    #+#             */
/*   Updated: 2023/01/30 09:05:39 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Contact.hpp"

Contact::Contact(void) {
    return ;
}

Contact::~Contact(void) {
    return ;
}

void	get_info() {
    std::string str;

	std::cout << "first name: ";
    getline(std::cin, str);
    this->;
    std::cout << "last name: ";
    getline(std::cin, str);
    std::cout << "nickname: ";
    getline(std::cin, str);
    std::cout << "phone number: ";
    getline(std::cin, str);
    std::cout << "darkest secret: ";
    getline(std::cin, str);
}
