#pragma once

#include <iostream>
#include <string>
#include <cstdlib>

template <typename T>
void	print(T const &elem) {
	std::cout << elem << " ; ";
}

template <typename T>
void	square(T &elem) {
	elem *= elem;
}

template <typename T>
void	uppercase(T &elem) {
	for (size_t i(0); i < elem.size(); i++) {
		elem[i] = std::toupper(elem[i]);
	}
}

template <typename T, typename F>
void	iter(T *array, size_t const size, F func) {
	for (size_t i(0); i < size; ++i) {
		func(array[i]);
	}
}
