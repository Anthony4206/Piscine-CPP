#pragma once

# include <stack>
# include <algorithm>

template <typename T>
class	MutantStack : public std::stack<T> {
	public:
		typedef typename std::stack<T>::container_type::iterator	iterator;

		iterator	begin() {
			return (std::begin(std::stack<T>::c));
		}

		iterator	end() {
			return (std::end(std::stack<T>::c));
		}
};
