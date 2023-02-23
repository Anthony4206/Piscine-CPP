#pragma once

#include <exception>

template <typename T>
class	Array {
	private:
		T				*_array;
		unsigned int	_size;
	public:
		Array() : _array(nullptr), _size(0) {}
		Array(unsigned int n) : _array(new T[n]), _size(n) {}
		Array(Array const &rhs) : _array(new T[rhs._size]), _size(rhs._size) {}
		~Array() { delete [] _array; }

		Array	&operator=(Array const &rhs) {
			if (this != &rhs) {
				delete [] _array;
				_array = new T[rhs._size];
				_size = rhs._size;
			}
			return (*this);
		}

		T	&operator[](unsigned int const index) {
			if (index >= _size) {
				throw std::out_of_range("index out of range");
			}
			return (_array[index]);
		}

		unsigned int	size() const {
			return (_size);
		}
};
