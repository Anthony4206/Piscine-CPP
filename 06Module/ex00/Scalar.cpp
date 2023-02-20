#include <iostream>
#include <sstream>
#include <exception>

#include "Scalar.hpp"

Scalar::Scalar(std::string const &literal)
	: _char('\0'), _int(0), _float(0.0f), _double(0.0),
	_types[0]("char"), _types[1]("int"), _types[2]("float"), _types[3]("double") {
	try {
		determine_literal_type(literal);
		set_param_value(literal);
		std::cout << _char << std::endl;
		std::cout << _int << std::endl;
		std::cout << _float << std::endl;
		std::cout << _double << std::endl;
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
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

void Scalar::determine_literal_type(std::string const &literal) {
    if (is_char_literal(literal))
        _type = "char";
    else if (is_int_literal(literal))
        _type = "int";
    else if (is_float_literal(literal))
        _type = "float";
    else if (is_double_literal(literal))
        _type = "double";
    else
		throw Scalar::InvalidTypeException();
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

void	Scalar::set_param_value(std::string const &literal) {
	int	i = 0;
	for (; i < 4; i++) {
		if (_types[i] == _type)
			break ;
	}
	switch (i) {
		case 0:
			_char = literal[0];
			break;
		case 1:
			_int = std::stoi(literal);
			break;
		case 2:
			_float = std::stof(literal);
			break;
		case 3:
			_double = std::stod(literal);
			break;		
		default:
			throw Scalar::InvalidTypeException();
	}
}

char const	*Scalar::InvalidTypeException::what() const throw() {
	return ("error : the type is invalid");
}

std::ostream &operator<<(std::ostream const &o, Scalar const &rhs) {
	(void)o;
	(void)rhs;
}
