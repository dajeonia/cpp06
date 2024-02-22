#include "Serializer.hpp"
#include <iostream>

int	main(void)
{
	Data data = {5};

	std::cout << "==============================" << std::endl;
	std::cout << "&data: " << &data << std::endl;
	std::cout << "data.content: " << data.content << std::endl;

	std::cout << "==============================" << std::endl;
	uintptr_t serial(Serializer::serialize(&data));
	std::cout << "serial: " << serial << std::endl;

	std::cout << "==============================" << std::endl;
	Data* deserialized(Serializer::deserialize(serial));
	std::cout << "deserialized: " << deserialized << std::endl;
	std::cout << "deserialized->content: " << deserialized->content << std::endl;

	std::cout << "==============================" << std::endl;
	return (0);
}
