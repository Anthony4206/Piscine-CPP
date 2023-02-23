#include "Data.hpp"

Data::Data()
	: _value1("I am a string"), _value2('a'), _value3(42),
	_value4(42.42f), _value5(42.042) {
		return ;
}

Data::Data(Data const &rhs) {
	*this = rhs; 
}

Data::~Data() {
	return ;
}

Data		&Data::operator=(Data const &rhs) {
	if (this != &rhs) {
		_value1 = rhs._value1;
		_value2 = rhs._value2;
		_value3 = rhs._value3;
		_value4 = rhs._value4;
		_value5 = rhs._value5;
	}
	return (*this);
}

std::string	Data::getValue1() const {
	return (_value1);
}

char	Data::getValue2() const {
	return (_value2);
}

int	Data::getValue3() const {
	return (_value3);
}

float	Data::getValue4() const {
	return (_value4);
}

double	Data::getValue5() const {
	return (_value5);
}

std::ostream	&operator<<(std::ostream &o, Data const &rhs) {
	o << "string: " << rhs.getValue1() << std::endl;
	o << "char:   " << rhs.getValue2() << std::endl;
	o << "int:    " << rhs.getValue3() << std::endl;
	o << "float:  " << rhs.getValue4() << std::endl;
	o << "double: " << rhs.getValue5();
	return (o);
}
