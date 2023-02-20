/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:21:59 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/20 16:22:38 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <exception>

class	Bureaucrat;

class AForm {
	private:
		std::string const	_name;
		std::string const	_target;
		bool				_sign;
		int	const			_signGrade;
		int	const			_execGrade;
	public:
		AForm(void);
		AForm(std::string const &name, std::string const &target, unsigned int signGrade, unsigned int execGrade);
		AForm(AForm const &rhs);
		virtual ~AForm(void);

		AForm	&operator=(AForm const &rhs);

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

std::ostream	&operator<<(std::ostream &o, AForm const &rhs);
