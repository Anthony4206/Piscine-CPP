#include <iostream>

#include "Data.hpp"
#include "serialize.hpp"

int	main(void) {
	Data		data;
	uintptr_t	serialized;
	
	std::cout << data << std::endl;
	serialized = serialize(&data);

	Data		*restored = deserialize(serialized);
	
	std::cout << *restored << std::endl;

	return (0);
}
