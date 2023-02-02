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
    if (PhoneBook::s_size < 8)
        PhoneBook::s_size++;
    for (int i = PhoneBook::s_size - 1; i > 0; i--) {
        PhoneBook::_contact[i] = PhoneBook::_contact[i - 1];
    }
	this->_contact[0].get_info();
}

void    PhoneBook::display_contacts() {
    std::string index;

    if (PhoneBook::s_size == 0) {
        std::cout << "Phonebook is empty" << std::endl;
        return ;
    }
    std::cout << "|   INDEX  |FIRST NAME|LAST NAME | NICKNAME |" << std::endl;
    for (int i = 0; i < PhoneBook::s_size; i++) {
        PhoneBook::_contact[i].set_contact(i + 1);
    }
    do {
        std::cout << "Enter index: ";
        getline(std::cin, index);
        if (std::cin.eof()) {
            std::cout << std::endl;
            exit(0);
        }
    } while (index.size() != 1
        || !(index.at(0) >= '1' && index.at(0) - '0' <= PhoneBook::s_size));
    PhoneBook::_contact[std::stoi(index) - 1].contact_info();
}

int PhoneBook::s_size = 0;
