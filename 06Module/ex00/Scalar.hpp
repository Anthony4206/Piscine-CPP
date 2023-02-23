#pragma once

# include <string>

class	Scalar {
	private:
		Scalar();

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

		char	getChar() const;
		int		getInt() const;
		float	getFloat() const;
		double	getDouble() const;

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

		class NotDisplayableException : public std::exception {
			public:
				char const	*what() const throw();
		};

		class ImpossibleException : public std::exception {
			public:
				char const	*what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, Scalar const &rhs);
