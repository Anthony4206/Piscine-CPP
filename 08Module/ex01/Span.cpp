#include <iostream>
#include <vector>
#include <exception>

#include "Span.hpp"

Span::Span(unsigned int const N) : _N(N) {
	return ;
}

Span::Span(Span const &rhs) : _N(rhs._N) {
	return ;
}

Span::~Span() {
	return ;
}

Span	&Span::operator=(Span const &rhs) {
	if (this != &rhs) {
		_N = rhs._N;
		_data = rhs._data;
	}
	return (*this);
}

void	Span::addNumber(int n) {
	if (_data.size() >= _N) {
		throw std::overflow_error("Cannot add more numbers");
	}
	_data.push_back(n);
}

void	Span::addNumbers(std::vector<int>::iterator first, std::vector<int>::iterator last) {
	while (first != last) {
		if (_data.size() >= _N) {
			throw std::overflow_error("Cannot add more numbers");
		}
		addNumber(*first);
		++first;
	}
}

int		Span::shortestSpan() const {
	if (_data.size() <= 1)
		throw std::logic_error("there must be 2 elements to compare values");

	std::vector<int>	tmp(_data);

	std::sort(tmp.begin(), tmp.end());

	int	shortest = tmp[1] - tmp[0];

	for (size_t i(2); i < tmp.size(); i++) {
		int	current = tmp[i] - tmp[i - 1];
		if (current < shortest)
			shortest = current;
	}
	return (shortest);
}

int		Span::longestSpan() const {
	if (_data.size() <= 1)
		throw std::logic_error("there must be 2 elements to compare values");

	int	min = *std::min_element(_data.begin(), _data.end());
	int	max = *std::max_element(_data.begin(), _data.end());
	return (max - min);
}
