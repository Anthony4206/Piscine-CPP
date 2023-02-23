#pragma once

# include <iostream>
# include <string>

class	Data {
	private:
		std::string	_value1;
		char		_value2;
		int			_value3;
		float		_value4;
		double		_value5;
	public:
		Data();
		Data(Data const &rhs);
		~Data();

		Data		&operator=(Data const &rhs);

		std::string	getValue1() const;
		char		getValue2() const;
		int			getValue3() const;
		float		getValue4() const;
		double		getValue5() const;
};

std::ostream	&operator<<(std::ostream &o, Data const &rhs);
