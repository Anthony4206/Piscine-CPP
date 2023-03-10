#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
    private:
        Contact 	_contact[8];
		static int	s_size;
    public:
        PhoneBook(void);
        ~PhoneBook(void);

        void    add_user();
};

#endif
