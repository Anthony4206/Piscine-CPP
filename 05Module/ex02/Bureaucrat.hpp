#pragma once

# include <iostream>
# include <string>
# include <exception>

# include "Form.hpp"

class	Bureaucrat {
	private:
		std::string const	_name;
		int					_grade;
	public:
		Bureaucrat(void);
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(Bureaucrat const &rhs);
		~Bureaucrat(void);
		
		Bureaucrat	&operator=(Bureaucrat const &rhs);

		std::string	getName(void) const;
		int			getGrade(void) const;
		void		upGrade(unsigned int value);
		void		downGrade(unsigned int value);

		void		signForm(Form &rhs) const;

		void		executeForm(Form const &form) const;

		class GradeTooHighException : public std::exception {
			public:
				const char	*what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char	*what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);
