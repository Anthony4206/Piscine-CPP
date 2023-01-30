/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 08:25:55 by alevasse          #+#    #+#             */
/*   Updated: 2023/01/30 08:47:30 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "PhoneBook.hpp"

int	main(int argc, char **argv) {
	PhoneBook	phone_book;
	std::string	command;

	if (argc != 1)
		return (-1);
	do {
		std::cout << "Enter command ADD, SEARCH or EXIT: ";
		getline(std::cin, command);
		if (command == "ADD")
			phone_book.add_user();
		else if (command == "SEARCH")
			std::cout << command << std::endl;
		else if (command != "EXIT")
			std::cout << "" << std::endl;
	} while (command != "EXIT");
}
