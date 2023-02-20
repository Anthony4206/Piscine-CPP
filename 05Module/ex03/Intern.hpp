#pragma once

# include <iostream>
# include <string>
# include <exception>

# include "Form.hpp"

class	Intern {
public:
	Intern(void);
	Intern(Intern const &rhs);
	~Intern(void);

	Intern	&operator=(Intern const &rhs);

	Form	*makeForm(std::string const &nameForm, std::string const &target);

	class BadNameException : public std::exception {
		public:
			const char	*what() const throw();
	};
};
