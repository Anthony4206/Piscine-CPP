#pragma once

# include <iostream>
# include <string>
# include <exception>

# include "Form.hpp"

class	Bureaucrat;

class	RobotomyRequestForm : public Form {
	private:
		RobotomyRequestForm(void);
	public:
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &rhs);
		~RobotomyRequestForm(void);

		RobotomyRequestForm	&operator=(RobotomyRequestForm const &rhs);

		virtual void			execute(Bureaucrat const &executor) const;
};
