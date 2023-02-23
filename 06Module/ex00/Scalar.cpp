#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <sstream>
#include <exception>

#include "Scalar.hpp"

Scalar::Scalar(std::string const &literal)
	: _char('\0'), _int(0), _float(0.0f), _double(0.0) {
		determine_literal_type(literal);
}

Scalar::Scalar(Scalar const &rhs) {
	*this = rhs;
}

Scalar::~Scalar() {
	return ;
}

Scalar	&Scalar::operator=(Scalar const &rhs) {
	(void)rhs;
	return (*this);
}

char	Scalar::getChar() const {
	char	c;

	if (_type == "char") {
		return (_char);
	} else if (_type == "int") {
		if (_int < std::numeric_limits<char>::min()
			|| _int > std::numeric_limits<char>::max())
			throw Scalar::ImpossibleException();
		c = static_cast<char>(_int);
		if (!isprint(c))
			throw Scalar::NotDisplayableException();
		else
			return (c);
	} else if (_type == "float") {
		c = static_cast<char>(_float);
		if (isnan(_float) || isinf(_float) || _float < std::numeric_limits<char>::min()
			|| _float > std::numeric_limits<char>::max())
			throw Scalar::ImpossibleException();
		else if (!isprint(c))
			throw Scalar::NotDisplayableException();
		else
			return (c);
	} else {
		c = static_cast<char>(_double);
		if (isnan(_double) || isinf(_double) || _double < std::numeric_limits<char>::min()
			|| _double > std::numeric_limits<char>::max())
			throw Scalar::ImpossibleException();
		else if (!isprint(c))
			throw Scalar::NotDisplayableException();
		else
			return (c);
	}
}

int	Scalar::getInt() const {
	if (_type == "char") {
		return (static_cast<int>(_char));
	} else if (_type == "int") {
		return (_int);
	} else if (_type == "float") {
		if (isnan(_float) || isinf(_float) || _float < std::numeric_limits<int>::min()
			|| _float > std::numeric_limits<int>::max())
			throw Scalar::ImpossibleException();
		else
			return (static_cast<int>(_float));
	} else {
		if (isnan(_double) || isinf(_double) || _double < std::numeric_limits<int>::min()
			|| _double > std::numeric_limits<int>::max())
			throw Scalar::ImpossibleException();
		else
			return (static_cast<int>(_double));
	}
}

float	Scalar::getFloat() const {
	if (_type == "char")
		return (static_cast<float>(_char));
	else if (_type == "int")
		return (static_cast<float>(_int));
	else if (_type == "float")
		return (_float);
	else
		return (static_cast<float>(_double));
}

double	Scalar::getDouble() const {
	if (_type == "char")
		return (static_cast<double>(_char));
	else if (_type == "int")
		return (static_cast<double>(_int));
	else if (_type == "float")
		return (static_cast<double>(_float));
	else
		return (_double);
}

void Scalar::determine_literal_type(std::string const &literal) {
    if (is_char_literal(literal)) {
        _type = "char";
		_char = literal.front();
    } else if (is_int_literal(literal)) {
        _type = "int";
		try {
			_int = std::stoi(literal);
		} catch (std::out_of_range const &e) {
			throw Scalar::InvalidTypeException();
		}
    } else if (is_float_literal(literal)) {
        _type = "float";
		try {
			_float = std::stof(literal);
		} catch (std::out_of_range const &e) {
			if (literal.front() == '-')
				_float = -std::numeric_limits<float>::infinity();
			else
				_float = std::numeric_limits<float>::infinity();
		}
    } else if (is_double_literal(literal)) {
        _type = "double";
		try {
			_double = std::stod(literal);
		} catch (std::out_of_range const &e) {
			if (literal.front() == '-')
				_double = -std::numeric_limits<double>::infinity();
			else
				_double = std::numeric_limits<double>::infinity();
		}
    } else {
		throw Scalar::InvalidTypeException();
	}
}

bool	Scalar::is_char_literal(std::string literal) {
	return (literal.size() == 1 && !isdigit(literal[0]));
}

bool	Scalar::is_int_literal(std::string literal) {
	for (size_t i(0); i < literal.size(); i++) {
		if (i == 0 && (literal[i] == '+' || literal[i] == '-')) {
			continue ;
		} else if (isdigit(literal[i])) {
			continue;
		} else {
			return (false);
		}
	}
	return (true);
}

bool	Scalar::is_float_literal(std::string literal) {
	std::string const pseudo[6] = {"-inff", "+inff", "nanf"};

	for (int i(0); i < 3; i++) {
		if (literal == pseudo[i])
			return (true);
	}

	bool	point;

	point = false;
	if (literal.size() < 4)
		return (false);
	for (size_t	i(0); i < (literal.size() - 1); i++) {
		if (i == 0 && (literal[i] == '+' || literal[i] == '-')) {
			continue ;
		} else if (isdigit(literal[i])) {
			continue ;
		} else if (i && i != (literal.size() - 2) && literal[i] == '.' && !point) {
			if ((literal[0] == '+' || literal[0] == '-') && i == 1)
				return (false);
			point = true;
		} else {
			return (false);
		}
	}
	if (literal[literal.size() - 1] == 'f' && point)
			return (true);
	return (false);
}

bool	Scalar::is_double_literal(std::string literal) {
	std::string const pseudo[6] = {"-inf", "+inf", "nan"};

	for (int i(0); i < 3; i++) {
		if (literal == pseudo[i])
			return (true);
	}

	bool	point;

	point = false;
	if (literal.size() < 3)
		return (false);
	for (size_t	i(0); i < literal.size(); i++) {
		if (i == 0 && (literal[i] == '+' || literal[i] == '-')) {
			continue ;
		} else if (isdigit(literal[i])) {
			continue ;
		} else if (i && i != (literal.size() - 1) && literal[i] == '.' && !point) {
			if ((literal[0] == '+' || literal[0] == '-') && i == 1)
				return (false);
			point = true;
		} else {
			return (false);
		}
	}
	return (true);
}

char const	*Scalar::InvalidTypeException::what() const throw() {
	return ("error : the type is invalid");
}

char const	*Scalar::NotDisplayableException::what() const throw() {
	return ("not displayable");
}

char const	*Scalar::ImpossibleException::what() const throw() {
	return ("impossible");
}

std::ostream &operator<<(std::ostream &o, Scalar const &rhs) {
	o << "char: ";
	try {
		char	c;

		c = rhs.getChar();
		o << "'" << c << "'" << std::endl;
	} catch (std::exception const &e) {
		o << e.what() << std::endl;
	}
	o << "int: ";
	try {
		int	i;

		i = rhs.getInt();
		o << rhs.getInt() << std::endl;
	} catch (std::exception const &e) {
		o << e.what() << std::endl;
	}
	o << "float: ";
	try {
		float decimal;
		if (modf(rhs.getFloat(), &decimal) == 0)
			o.precision(1);
		o << std::fixed << rhs.getFloat() << "f" << std::endl;
	} catch (std::exception const &e) {
		o << e.what() << std::endl;
	}	 
	o << "double: ";
	try {
		double decimal;
		if (modf(rhs.getDouble(), &decimal) == 0)
			o.precision(1);
		o << std::fixed << rhs.getDouble();
	} catch (std::exception const &e) {
		o << e.what();
	}
	return (o);
}
