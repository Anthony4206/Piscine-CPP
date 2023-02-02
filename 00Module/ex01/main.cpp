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
#include <stdexcept>

#include "PhoneBook.hpp"

int	main(int argc, char **argv) {
	PhoneBook	phone_book;
	std::string	command;

    (void)argv;
	if (argc != 1)
		return (-1);
	do {
		std::cout << "Enter command ADD, SEARCH or EXIT: ";
		getline(std::cin, command);
		if (command == "ADD")
			phone_book.add_user();
		else if (command == "SEARCH")
			phone_book.display_contacts();
        if (std::cin.eof()) {
            std::cout << std::endl;
            exit(0);
        }
	} while (command != "EXIT"); 
    return (0);
}
