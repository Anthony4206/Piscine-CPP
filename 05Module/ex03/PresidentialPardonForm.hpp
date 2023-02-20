#pragma once

# include <iostream>
# include <string>
# include <exception>

# include "Form.hpp"

class	Bureaucrat;

class	PresidentialPardonForm : public Form {
	private:
		PresidentialPardonForm(void);
	public:
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(PresidentialPardonForm const &rhs);
		~PresidentialPardonForm(void);

		PresidentialPardonForm	&operator=(PresidentialPardonForm const &rhs);

		virtual void			execute(Bureaucrat const &executor) const;
};
