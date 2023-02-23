#pragma once

#include <vector>

class	Span {
	private:
		Span();

		std::vector<int>	_data;
		unsigned int		_N;
	public:
		Span(unsigned int const N);
		Span(Span const &rhs);
		~Span();

		Span	&operator=(Span const &rhs);

		void	addNumber(int n);
		void	addNumbers(std::vector<int>::iterator first, std::vector<int>::iterator last);
		int		shortestSpan() const;
		int		longestSpan() const;
};

