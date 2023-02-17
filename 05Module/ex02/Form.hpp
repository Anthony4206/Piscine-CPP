#pragma once

# include <iostream>
# include <string>
# include <exception>

class	Bureaucrat;

class Form {
	private:
		std::string const	_name;
		std::string const	_target;
		bool				_sign;
		int					_signGrade;
		int					_execGrade;
	public:
		Form(void);
		Form(std::string const &name, std::string const &target, unsigned int signGrade, unsigned int execGrade);
		Form(Form const &rhs);
		~Form(void);

		Form	&operator=(Form const &rhs);

		std::string const	getName() const;
		std::string const	getTarget() const;
		bool				getSign() const;
		int					getSignGrade() const;
		int					getExecGrade() const;

		virtual void		execute(Bureaucrat const &executor) const = 0;

		void				beSigned(Bureaucrat const &rhs);

		class GradeTooHighException : public std::exception {
			public:
				const char	*what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char	*what() const throw();
		};

		class FormAlreadySign : public std::exception {
			public:
				const char	*what() const throw();
		};

		class ExecutionConditionInvalid : public std::exception {
			public:
				const char	*what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &o, Form const &rhs);
