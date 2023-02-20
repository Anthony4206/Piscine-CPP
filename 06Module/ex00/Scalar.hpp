#pragma once

# include <string>

class	Scalar {
	private:
		Scalar();

		std::string const	_types[4];
		std::string			_type;
		char				_char;
		int					_int;
		float				_float;
		double				_double;
	public:
		Scalar(std::string const &literal);
		Scalar(Scalar const &rhs);
		~Scalar();

		Scalar	&operator=(Scalar const &literal);

		void	determine_literal_type(std::string const &literal);

		bool	is_char_literal(std::string literal);
		bool	is_int_literal(std::string literal);
		bool	is_float_literal(std::string literal);
		bool	is_double_literal(std::string literal);

		void	set_param_value(std::string const &literal);

		class InvalidTypeException : public std::exception {
			public:
				char const	*what() const throw();
		};
};

std::ostream &operator<<(std::ostream const &o, Scalar const &rhs);
