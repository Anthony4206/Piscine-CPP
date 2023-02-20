#pragma once

# include <iostream>
# include <string>
# include <exception>

# include "Form.hpp"

class	Bureaucrat;

class	ShrubberyCreationForm : public Form {
	private:
		ShrubberyCreationForm(void);
	public:
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &rhs);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &rhs);

		virtual void			execute(Bureaucrat const &executor) const;
};
