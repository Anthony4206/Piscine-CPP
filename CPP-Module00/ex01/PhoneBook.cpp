#include <iostream>

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void) {
    return ;
}

PhoneBook::~PhoneBook(void) {
    return ;
}

void    PhoneBook::add_user() {
    std::string str;

    std::cout << "first name: ";
    getline(std::cin, str);
    this->_contact[0]
    std::cout << "last name: ";
    getline(std::cin, str);
    std::cout << "nickname: ";
    getline(std::cin, str);
    std::cout << "phone number: ";
    getline(std::cin, str);
    std::cout << "darkest secret: ";
    getline(std::cin, str);
}
