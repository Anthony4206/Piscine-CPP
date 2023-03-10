/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:59:25 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/20 15:59:26 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <exception>

class	Bureaucrat;

class Form {
	private:
		std::string const	_name;
		bool				_sign;
		int	const			_signGrade;
		int	const			_execGrade;
	public:
		Form(void);
		Form(std::string name, unsigned int signGrade, unsigned int execGrade);
		Form(Form const &rhs);
		~Form(void);

		Form	&operator=(Form const &rhs);

		std::string const	getName() const;
		bool				getSign() const;
		int					getSignGrade() const;
		int					getExecGrade() const;

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
};

std::ostream	&operator<<(std::ostream &o, Form const &rhs);
