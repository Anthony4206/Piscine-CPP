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
#include <iomanip>

#include "Contact.hpp"

Contact::Contact(void) {
    return ;
}

Contact::~Contact(void) {
    return ;
}

std::string    Contact::_valid_entry(std::string type) {
    std::string ret;
	do {
        std::cout << type;
        getline(std::cin, ret);
        if (std::cin.eof()) {
            std::cout << std::endl;
            exit(0);
        }
        for (size_t i = 0; i < ret.size(); i++)
            if (!(ret[i] >= 32 && ret[i] <= 126))
                ret.clear();
    } while (ret.empty());
    return (ret);
}

void	Contact::get_info() {
    this->_first_name = Contact::_valid_entry("first_name: ");
    this->_last_name = Contact::_valid_entry("last_name: ");;
    this->_nickname = Contact::_valid_entry("nickname: ");;
    this->_phone_number = Contact::_valid_entry("phone_name: ");;
    this->_darkest_secret = Contact::_valid_entry("darkest_secret: ");;
}

void    Contact::set_contact(int i) {
    std::cout << "|" << std::right << std::setw(10) << i << "|";
    if (this->_first_name.size() > 10)
        std::cout << this->_first_name.substr(0, 9) << ".|";
    else
        std::cout << std::right << std::setw(10) << this->_first_name << "|";
    if (this->_last_name.size() > 10)
        std::cout << this->_last_name.substr(0, 9) << ".|";
    else
        std::cout << std::right << std::setw(10) << this->_last_name << "|";
    if (this->_nickname.size() > 10)
        std::cout << this->_nickname.substr(0, 9) << ".|" << std::endl;
    else
        std::cout << std::right << std::setw(10) << this->_nickname << "|" << std::endl;
}

void    Contact::contact_info() {
    std::cout << "first name: " << this->_first_name << std::endl;
    std::cout << "last name: " << this->_last_name << std::endl;
    std::cout << "nickname: " << this->_nickname << std::endl;
    std::cout << "phone name: " << this->_phone_number << std::endl;
    std::cout << "drakest secret: " << this->_darkest_secret << std::endl;
}
