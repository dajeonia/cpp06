#include "ScalarConverter.hpp"
#include <iostream>
#include "MyLib.hpp"

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		std::cout << My_Lib::convert(My_Lib::trim(argv[1])) << std::endl;
	}
	return (0);
}


