#include <iostream>
#include <vector>
#include <exception>

template <typename T>
typename T::iterator	easyfind(T &container, int value) {
	typename T::iterator	it = std::find(container.begin(), container.end(), value);

	if (it == container.end()) {
		throw std::out_of_range("value hasen't been found");
	}
	return (it);
}
